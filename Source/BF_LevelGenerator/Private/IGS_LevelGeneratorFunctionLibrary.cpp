#include "IGS_LevelGeneratorFunctionLibrary.h"
#include "IGS_ConnectionPointBase.h"
#include "IGS_RoundNumbersLibrary.h"
#include "IGS_RandomStreamHolder.h"
#include "IGS_LevelGeneratorSubsystem.h"
#include "IGS_GeneratorBuildConfiguration.h"
#include "IGS_BuildConfigurationDataAsset.h"
#include "BF_LevelGeneratorModule.h"

UIGS_LevelGeneratorFunctionLibrary::UIGS_LevelGeneratorFunctionLibrary() {
}

void UIGS_LevelGeneratorFunctionLibrary::RandomIntegerInRangeWithRandomStreamHolder(UIGS_RandomStreamHolder*& inRandomStream, int32 InRangeMin, int32 InRangeMax, int32& outInteger) {
	if (!inRandomStream) return;
	outInteger = inRandomStream->RandomStream.RandRange(InRangeMin, InRangeMax);
}

bool UIGS_LevelGeneratorFunctionLibrary::LoadLevelAccordingToUObjectConfiguration(UObject* WorldContextObject, UIGS_GeneratorBuildConfiguration* UObjectConfiguration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints) {
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World) return false;
	UIGS_LevelGeneratorSubsystem* LGS = World->GetSubsystem<UIGS_LevelGeneratorSubsystem>();
	if (!LGS) return false;

	if (!UObjectConfiguration)
	{
		FFrame::KismetExecutionMessage(TEXT("No UObject configuration provided"), ELogVerbosity::Error);
		return false;
	}
	UIGS_BuildConfigurationDataAsset* BCDA = UObjectConfiguration->BuildConfigurationDataAsset;
	if (!BCDA)
	{
		UE_LOG(LogBF_LevelGenerator, Error, TEXT("Missing BuildConfigurationDataAsset in UObject configuration %s"), *GetFullNameSafe(UObjectConfiguration));
		return false;
	}
	UIGS_LevelGeneratorSubsystem::FCachedConfiguration Configuration(
		UObjectConfiguration->Cooked_ConnectionPoints.Num() ? UObjectConfiguration->Cooked_ConnectionPoints : BCDA->ConnectionPoints,
		UObjectConfiguration->Cooked_Variants.Num() ? UObjectConfiguration->Cooked_Variants : BCDA->Variants,
		BCDA->Level
	);
	return LGS->LoadLevelAccordingToConfiguration(RandomStreamHolder, GeneratorVariantData, Connection, UObjectConfiguration->ConnectionName, UObjectConfiguration->VariantName, Configuration, outFreeConnectionPoints);
}

bool UIGS_LevelGeneratorFunctionLibrary::LoadLevelAccordingToTileConfiguration(UObject* WorldContextObject, FIGS_BuildConfigurationTileable Configuration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints) {
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World) return false;
	UIGS_LevelGeneratorSubsystem* LGS = World->GetSubsystem<UIGS_LevelGeneratorSubsystem>();
	if (!LGS) return false;
	if (!Configuration.BuildConfigurationDataAsset)
	{
		FFrame::KismetExecutionMessage(TEXT("No build configuration provided"), ELogVerbosity::Error);
		return false;
	}
	if (!Configuration.BuildConfigurationDataAsset->ConnectionPoints.Num())
	{
		UE_LOG(LogBF_LevelGenerator, Error, TEXT("No connection points in %s"), *GetFullNameSafe(Configuration.BuildConfigurationDataAsset));
		return false;
	}

	FName ConnectionName = Configuration.BuildConfigurationDataAsset->ConnectionPoints[0].Name;
	FName VariantName = Configuration.BuildConfigurationDataAsset->Variants.IsValidIndex(Configuration.VariantIndex) ?
		Configuration.BuildConfigurationDataAsset->Variants[Configuration.VariantIndex].Name :
		NAME_None;
	return LGS->LoadLevelAccordingToConfiguration(RandomStreamHolder, GeneratorVariantData, Connection, ConnectionName, VariantName, UIGS_LevelGeneratorSubsystem::FCachedConfiguration(Configuration.BuildConfigurationDataAsset), outFreeConnectionPoints);
}

bool UIGS_LevelGeneratorFunctionLibrary::LoadLevelAccordingToConfiguration(UObject* WorldContextObject, FIGS_BuildConfiguration Configuration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints) {
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!World) return false;
	UIGS_LevelGeneratorSubsystem* LGS = World->GetSubsystem<UIGS_LevelGeneratorSubsystem>();
	if (!LGS) return false;

	if (!Configuration.CachedBuildConfiguration.Initialized)
	{
		// must do this synchronously, see LoadLevelAccordingToConfiguration
		Configuration.BuildConfigurationDataAsset_Holder = Configuration.BuildConfigurationDataAsset.LoadSynchronous();
		if (!Configuration.BuildConfigurationDataAsset_Holder)
		{
			FFrame::KismetExecutionMessage(*FString::Printf(TEXT("Failed to load build configuration %s"), *Configuration.BuildConfigurationDataAsset.ToString()), ELogVerbosity::Error);
			return false;
		}
		return LGS->LoadLevelAccordingToConfiguration(RandomStreamHolder, GeneratorVariantData, Connection, Configuration.ConnectionName, Configuration.VariantName, UIGS_LevelGeneratorSubsystem::FCachedConfiguration(Configuration.BuildConfigurationDataAsset_Holder), outFreeConnectionPoints);
	}
	UIGS_LevelGeneratorSubsystem::FCachedConfiguration Cfg(
		Configuration.CachedBuildConfiguration.ConnectionPoints,
		Configuration.CachedBuildConfiguration.Variants,
		Configuration.CachedBuildConfiguration.Level
	);
	return LGS->LoadLevelAccordingToConfiguration(RandomStreamHolder, GeneratorVariantData, Connection, Configuration.ConnectionName, Configuration.VariantName, Cfg, outFreeConnectionPoints);
}

int32 UIGS_LevelGeneratorFunctionLibrary::GetRandomFromRandomStreamHolder(UIGS_RandomStreamHolder* RandomStreamHolder, int32 NumberOfResults, bool UniqueResult, bool LOOP, FIGS_UsedNumbersHolder& UsedNumbersHolder) {
    if (!RandomStreamHolder || NumberOfResults <= 0) return 0;
	if (UniqueResult)
	{
		UsedNumbersHolder.SelectedNumbers.SetNumZeroed(NumberOfResults, false);
		if (!MakeArrayView(UsedNumbersHolder.SelectedNumbers).Slice(0, NumberOfResults).Contains(false))
		{
			if (!LOOP) return 0;
			UsedNumbersHolder.SelectedNumbers.Init(false, NumberOfResults);
		}
	}
	for (;;)
	{
		int32 Candidate = RandomStreamHolder->RandomStream.RandHelper(NumberOfResults);
		if (UniqueResult)
		{
			if (UsedNumbersHolder.SelectedNumbers[Candidate]) continue;
			UsedNumbersHolder.SelectedNumbers[Candidate] = true;
		}
		return Candidate + 1;
	}
}

bool UIGS_LevelGeneratorFunctionLibrary::GetIsClient(AActor* inWCA) {
    return inWCA && inWCA->GetNetMode() == NM_Client;
}

void UIGS_LevelGeneratorFunctionLibrary::GetGameplayTagParent(const FGameplayTag& inGameplayTag, FGameplayTag& outTagParent) {
	outTagParent = inGameplayTag.RequestDirectParent();
}

FIGS_ConnectionPointData UIGS_LevelGeneratorFunctionLibrary::GetConnectionPointData(AIGS_ConnectionPointBase* ConnectionPoint) {
	FIGS_ConnectionPointData out;
	if (!ConnectionPoint) return out;
	out.Name = ConnectionPoint->GetFName();
	out.Location = UIGS_RoundNumbersLibrary::Round(ConnectionPoint->GetActorLocation());
	out.Rotation = UIGS_RoundNumbersLibrary::Round(ConnectionPoint->GetActorRotation().Yaw);
    return out;
}

void UIGS_LevelGeneratorFunctionLibrary::FindShortestPathInGrid(int32 Start, int32 Target, int32 rowSize, TArray<int32> bLocked, TArray<int32>& Path) {
	checkf(0, TEXT("unimplemented"));
}

UIGS_GeneratorBuildConfiguration* UIGS_LevelGeneratorFunctionLibrary::CreateUObjectConfigurationFromTile(UObject* WorldContextObject, FIGS_BuildConfigurationTileable inTileConfiguration) {
	UIGS_BuildConfigurationDataAsset* BCDA = inTileConfiguration.BuildConfigurationDataAsset;
	UIGS_GeneratorBuildConfiguration* Config = NewObject<UIGS_GeneratorBuildConfiguration>(WorldContextObject);
    return nullptr;
}

void UIGS_LevelGeneratorFunctionLibrary::CallVariantOnWorld(UObject* WorldContextObject, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData inGeneratorVariantData, const FString& VariantName) {
	checkf(0, TEXT("unused"));
}

bool UIGS_LevelGeneratorFunctionLibrary::AddLeafTag(FGameplayTagContainer& inContainer, const FGameplayTag& inTagToAdd) {
	return inContainer.AddLeafTag(inTagToAdd);
}

