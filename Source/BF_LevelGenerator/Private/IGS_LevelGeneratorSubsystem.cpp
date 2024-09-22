#include "IGS_LevelGeneratorSubsystem.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_GeneratorVariantData.h"
#include "IGS_BuildConfigurationDataAsset.h"
#include "Engine/LevelStreamingDynamic.h"
#include "BF_LevelGeneratorModule.h"

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

bool UIGS_LevelGeneratorSubsystem::LoadLevelAccordingToConfiguration(FIGS_ConnectionPointData const& Connection, FName ConnectionName, TArrayView<FIGS_ConnectionPointData const> ConnectionPoints, FName VariantName, TArrayView<FIGS_VariantDefinition const> Variants, UIGS_BuildConfigurationDataAsset* BuildConfiguration, TArray<FIGS_ConnectionPointData>& OutConnectionPoints)
{
	if (!ConnectionPoints.Num()) ConnectionPoints = BuildConfiguration->ConnectionPoints;
	if (!Variants.Num()) Variants = BuildConfiguration->Variants;
	if (!ConnectionPoints.Num())
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("No connection points in %s"), *BuildConfiguration->Level.ToString()), ELogVerbosity::Warning);
		return false;
	}

	UWorld* World = GetWorld();

	FIGS_ConnectionPointData const* SrcConnection = ConnectionPoints.FindByKey(ConnectionName);
	if (!SrcConnection)
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("No connection %s in %s"), *ConnectionName.ToString(), *BuildConfiguration->Level.ToString()), ELogVerbosity::Warning);
		return false;
	}
	FConnectionPointTransform Transform = FConnectionPointTransform::Between(*SrcConnection, Connection);

	OutConnectionPoints.Empty();
	for (FIGS_ConnectionPointData const& CP : ConnectionPoints)
	{
		Transform.ApplyTo(OutConnectionPoints.Add_GetRef(CP));
	}

	//check((Transform.GetScale3D() - 1.).IsNearlyZero());
	bool bSuccess;
	ULevelStreaming* StreamingLevel = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(this, BuildConfiguration->Level, Transform.Translation, Transform.Rotator(), bSuccess);
	if (!bSuccess)
	{
		FFrame::KismetExecutionMessage(*FString::Printf(TEXT("Failed to add level instance %s"), *BuildConfiguration->Level.ToString()), ELogVerbosity::Warning);
		return false;
	}
	UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Added level instance %s"), *BuildConfiguration->Level.ToString());
	return true;
	//check(0);
}
UIGS_LevelGeneratorSubsystem::FConnectionPointTransform UIGS_LevelGeneratorSubsystem::FConnectionPointTransform::Between(FIGS_ConnectionPointData const& Src, FIGS_ConnectionPointData const& Dst)
{
	float DeltaYaw = Dst.Rotation - Src.Rotation;
	FVector Translation = Dst.Location - Src.Location.RotateAngleAxis(DeltaYaw, FVector::UpVector);
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
	CP.Location = CP.Location.RotateAngleAxis(Rotation, FVector::UpVector) + Translation;
}
