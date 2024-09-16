#include "IGS_AICommandHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_AICommandHelpers::UIGS_AICommandHelpers() {
}

UIGS_AICommandUseObject* UIGS_AICommandHelpers::CreateUseObjectCommand(AActor* inUsableObject) {
    return nullptr;
}

UIGS_AICommandBreachStackUp* UIGS_AICommandHelpers::CreateStackUpCommand(const FVector& inStackPos, AActor* inBreachable, bool inBreaching, const bool inCrouch) {
    return nullptr;
}

UIGS_AICommandSearch* UIGS_AICommandHelpers::CreateSearchCommand(const TArray<UIGS_SearchPointComponent*>& inPointsToSearch) {
    return nullptr;
}

UIGS_AICommandRevive* UIGS_AICommandHelpers::CreateReviveCommand(AIGS_GameCharacterFramework* charToRevive) {
    return nullptr;
}

UIGS_AICommandPlayAnimation* UIGS_AICommandHelpers::CreatePlaySOAnimationCommandTag(FGameplayTag inAnimationTag, float InTime, FIGS_InterestPointHolder inLookAt) {
    return nullptr;
}

UIGS_AICommandPlayAnimation* UIGS_AICommandHelpers::CreatePlaySOAnimationCommand(EIGS_AIMontageSOVariant InAnimation, float InTime, FIGS_InterestPointHolder inLookAt) {
    return nullptr;
}

UIGS_AICommandPlayMocapAnimation* UIGS_AICommandHelpers::CreatePlayMocapAnimationCommand(UAnimMontage* inAnimMontage, FName inSectionName, float InPlayRate, float inStartPosition) {
    return nullptr;
}

UIGS_AICommandPlayAnimation* UIGS_AICommandHelpers::CreatePlayAnimationCommandGenericTag(FGameplayTag inAnimationTag, float InTime, FIGS_InterestPointHolder inLookAt) {
    return nullptr;
}

UIGS_AICommandMoveToWaypoint* UIGS_AICommandHelpers::CreateMoveToWaypointCommand(AIGS_WaypointFramework* inWaypoint, const FVector& inLookAtPos, float inStoppingDistance, EIGS_Speed inMovementSpeed, bool inExactPosition) {
    return nullptr;
}

UIGS_AICommandMoveTo* UIGS_AICommandHelpers::CreateMoveToCommand(const FVector& InPosition, const FVector& inLookAtPos, float inStoppingDistance, EIGS_Speed inMovementSpeed) {
    return nullptr;
}

UIGS_AICommandFight* UIGS_AICommandHelpers::CreateFightCommand() {
    return nullptr;
}

UIGS_AICommandWait* UIGS_AICommandHelpers::CreateCommandWait(float InTime, FIGS_InterestPointHolder inLookAt) {
    return nullptr;
}

UIGS_AICommandThrowThrowable* UIGS_AICommandHelpers::CreateCommandThrowThrowable(FVector inTarget, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable, const float inThrowableCooldown, const float inGlobalCooldown) {
    return nullptr;
}

UIGS_AICommandRotateTo* UIGS_AICommandHelpers::CreateCommandRotateTo(float InTime, FIGS_InterestPointHolder inLookAt) {
    return nullptr;
}

UIGS_AICommandLayOnGround* UIGS_AICommandHelpers::CreateCommandLayOnGround() {
    return nullptr;
}

UIGS_AICommandBreachThrowFlashbang* UIGS_AICommandHelpers::CreateBreachThrowFlashbang(const FVector& InPosition, bool inFromRight) {
    return nullptr;
}

UIGS_AICommandBreachTakePosition* UIGS_AICommandHelpers::CreateBreachTakePosition(const FVector& inPositon, const FVector& inMoveLookAtPos, const FVector& inFinalLookAtPos, EIGS_AIMontageBreachVariant inMontageVariant) {
    return nullptr;
}

UIGS_AICommandBreachRemoveGate* UIGS_AICommandHelpers::CreateBreachRemoveGate(AActor* inBreachableObject, FVector Location, FVector LookAtPoint) {
    return nullptr;
}

UIGS_AICommandBreachRemoveDoors* UIGS_AICommandHelpers::CreateBreachRemoveDoors(AActor* inBreachableObject, bool inFromRight) {
    return nullptr;
}

UIGS_AICommandBreachIn* UIGS_AICommandHelpers::CreateBreachIn(const FVector& positon, const FVector& inLookAtPos) {
    return nullptr;
}

UIGS_AICommandBreachFight* UIGS_AICommandHelpers::CreateBreachFightCommand(bool inFromRight, const FVector& inToWallPoint) {
    return nullptr;
}

UIGS_AICommandBeingRevived* UIGS_AICommandHelpers::CreateBeingRevivedCommand(const AIGS_GameCharacterFramework* revivedByChar) {
    return nullptr;
}

