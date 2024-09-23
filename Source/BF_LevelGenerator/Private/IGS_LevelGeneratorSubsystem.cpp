#include "IGS_LevelGeneratorSubsystem.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_GeneratorVariantData.h"
#include "IGS_BuildConfigurationDataAsset.h"
#include "Engine/LevelStreamingDynamic.h"
#include "BF_LevelGeneratorModule.h"
#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "IGS_LightingScenariosSubsystem.h"

UIGS_LevelGeneratorSubsystem::UIGS_LevelGeneratorSubsystem() {
}

UIGS_LevelGeneratorSubsystem* UIGS_LevelGeneratorSubsystem::Instance(const UObject* inWorldContextObject) {
    return nullptr;
}

void UIGS_LevelGeneratorSubsystem::InitializeRooms_Server(ANavigationData* inNavData) {
}

int32 UIGS_LevelGeneratorSubsystem::GetDefaultSeed() const {
    return DefaultSeed;
}

UIGS_LevelGeneratorSubsystem::FCachedConfiguration::FCachedConfiguration(UIGS_BuildConfigurationDataAsset* BCDA)
	: ConnectionPoints(BCDA->ConnectionPoints)
	, Variants(BCDA->Variants)
	, Level(BCDA->Level)
{
}
bool UIGS_LevelGeneratorSubsystem::LoadLevelAccordingToConfiguration(UIGS_RandomStreamHolder* RSH, FIGS_GeneratorVariantData VariantData, FIGS_ConnectionPointData const& Connection, FName ConnectionName, FName VariantName, FCachedConfiguration Configuration, TArray<FIGS_ConnectionPointData>& OutConnectionPoints)
{
	if (!Configuration.ConnectionPoints.Num())
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("No connection points in %s"), *Configuration.Level.ToString()), ELogVerbosity::Warning);
		return false;
	}
	if (!VariantName.IsNone() && !Configuration.Variants.Contains(VariantName))
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("No variant %s in %s"), *VariantName.ToString(), *Configuration.Level.ToString()), ELogVerbosity::Warning);
		return false;
	}

	FIGS_ConnectionPointData const* SrcConnection = Configuration.ConnectionPoints.FindByKey(ConnectionName);
	if (!SrcConnection)
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("No connection %s in %s"), *ConnectionName.ToString(), *Configuration.Level.ToString()), ELogVerbosity::Warning);
		return false;
	}
	// TODO: game does rounding approximately everywhere in the transform process, we may need to round CPs and the level transform as well
	FConnectionPointTransform Transform = FConnectionPointTransform::Between(*SrcConnection, Connection);

	OutConnectionPoints.Empty();
	for (FIGS_ConnectionPointData const& CP : Configuration.ConnectionPoints)
	{
		Transform.ApplyTo(OutConnectionPoints.Add_GetRef(CP));
	}

	bool bSuccess;
	ULevelStreamingDynamic* StreamingLevel = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(this, Configuration.Level, Transform.Translation, Transform.Rotator(), bSuccess);
	if (!bSuccess)
	{
		UE_LOG(LogBF_LevelGenerator, Error, TEXT("Failed to add level instance %s"), *Configuration.Level.ToString());
		return false;
	}
	UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Added level instance %s"), *Configuration.Level.ToString());

	// unfortunately, we have to do this synchronously due to intrinsic problems w/ the design of LevelBuilder
	// LSA BPs run synchronously and expect to use the RSH for other tasks immediately after we return, so we must load & run the sublevel on the RSH before we do
	StreamingLevel->bShouldBlockOnLoad = true;
	GetWorld()->FlushLevelStreaming();
	ULevel* Level = StreamingLevel->GetLoadedLevel();
	if (!Level)
	{
		UE_LOG(LogBF_LevelGenerator, Error, TEXT("Failed to load level instance %s"), *Configuration.Level.ToString());
		return false;
	}

	UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Loaded level instance %s"), *Configuration.Level.ToString());
	AIGS_LevelBuilder_LevelScriptActor* LSA = Cast<AIGS_LevelBuilder_LevelScriptActor>(Level->GetLevelScriptActor());
	if (LSA) LSA->RunVariant_Sublevel(RSH, VariantName, VariantData);

	UIGS_LightingScenariosSubsystem* LSS = GetWorld()->GetSubsystem<UIGS_LightingScenariosSubsystem>();
	if (LSS) LSS->LoadLightingScenario(Level, Transform);

	return true;
}
AIGS_LevelBuilder_LevelScriptActor* UIGS_LevelGeneratorSubsystem::GetMainLevelScriptActor() const
{
	return Cast<AIGS_LevelBuilder_LevelScriptActor>(GetWorld()->GetLevelScriptActor());
}
ULevel* UIGS_LevelGeneratorSubsystem::GetMainLevel() const
{
	AIGS_LevelBuilder_LevelScriptActor* LSA = GetMainLevelScriptActor();
	return LSA ? LSA->GetLevel() : nullptr;
}
static inline FVector RotateZ(FVector In, float Rotation)
{
	return FVector(FVector2D(In).GetRotated(Rotation), In.Z);
};
UIGS_LevelGeneratorSubsystem::FConnectionPointTransform UIGS_LevelGeneratorSubsystem::FConnectionPointTransform::Between(FIGS_ConnectionPointData const& Src, FIGS_ConnectionPointData const& Dst)
{
	float DeltaYaw = Dst.Rotation - Src.Rotation;
	FVector Translation = Dst.Location - RotateZ(Src.Location, DeltaYaw);
	return FConnectionPointTransform{ Translation, DeltaYaw };
	//float DeltaYaw = Dst.Rotation - Src.Rotation;
	//FRotator Rotation(0, DeltaYaw, 0);
	//FVector Translation = Dst.Location - Rotation.RotateVector(Src.Location); // Src.Location.RotateAngleAxis(DeltaYaw, FVector::UpVector)
	//return FTransform(Rotation, Translation);
}
FRotator UIGS_LevelGeneratorSubsystem::FConnectionPointTransform::Rotator() const
{
	return FRotator(0, Rotation, 0);
}
void UIGS_LevelGeneratorSubsystem::FConnectionPointTransform::ApplyTo(FIGS_ConnectionPointData& CP) const
{
	CP.Rotation += Rotation;
	CP.Location = RotateZ(CP.Location, Rotation) + Translation;
}
