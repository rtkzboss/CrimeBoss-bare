#include "IGS_BlueprintUtilities.h"
#include "Kismet\GameplayStatics.h"

static EBoolExecPin BoolExec(bool In)
{
	return In ? EBoolExecPin::ETrue : EBoolExecPin::EFalse;
}
static EValidNotValidExecPin ValidExec(bool In)
{
	return In ? EValidNotValidExecPin::Valid : EValidNotValidExecPin::NotValid;
}

UIGS_BlueprintUtilities::UIGS_BlueprintUtilities() {
}

void UIGS_BlueprintUtilities::WaitForStreamingFinished(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

TArray<EIGS_TeamSideEnum> UIGS_BlueprintUtilities::TeamSidesMaskToArray(int32 inValidTeamSides) {
    return {};
}

void UIGS_BlueprintUtilities::SetPlayerInputForInteraction(bool inEnabled, APlayerController* InController) {
}

void UIGS_BlueprintUtilities::PataFix(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

void UIGS_BlueprintUtilities::IsValidClass(UClass* inClass, EValidNotValidExecPin& outBranches) {
	outBranches = ValidExec(IsValid(inClass));
}

void UIGS_BlueprintUtilities::IsServerOrStandalone(UObject* inWCO, EBoolExecPin& outBranches) {
}

bool UIGS_BlueprintUtilities::IsLocallyControlledPlayerPawn(const APawn* inPawn) {
    return false;
}

void UIGS_BlueprintUtilities::IsinEditor(UObject* inWCO, EBoolExecPin& outBranches) {
	outBranches = BoolExec(GIsEditor);
}

void UIGS_BlueprintUtilities::IsEditorBuild(EBoolExecPin& outBranches) {
#if WITH_EDITOR
	outBranches = EBoolExecPin::ETrue;
#else
	outBranches = EBoolExecPin::EFalse;
#endif
}

void UIGS_BlueprintUtilities::IsDedicatedServer(EBoolExecPin& outBranches) {
	outBranches = BoolExec(IsRunningDedicatedServer());
}

void UIGS_BlueprintUtilities::GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId) {
}

APlayerController* UIGS_BlueprintUtilities::GetLocalPlayerControllerForWorld(UObject* inWCO) {
    return UGameplayStatics::GetPlayerController(inWCO, 0);
}

APlayerController* UIGS_BlueprintUtilities::GetLocalPlayerController(UObject* inWCO) {
    return UGameplayStatics::GetPlayerController(inWCO, 0);
}

FColor UIGS_BlueprintUtilities::GetColorForTeamSide(EIGS_TeamSideEnum inTeamSide) {
    return FColor{};
}

void UIGS_BlueprintUtilities::GetBuildConfiguration(EBuildConfigurationExecPin& outBranches) {
}

void UIGS_BlueprintUtilities::Array_Shuffle_RandomStream(const TArray<int32>& TargetArray, const FRandomStream& inRandomStream) {
}

