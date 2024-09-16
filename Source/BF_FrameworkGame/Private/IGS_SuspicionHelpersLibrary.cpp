#include "IGS_SuspicionHelpersLibrary.h"

UIGS_SuspicionHelpersLibrary::UIGS_SuspicionHelpersLibrary() {
}

void UIGS_SuspicionHelpersLibrary::TriggerBotLimbo(const UObject* inWCO, bool inPlayVioceovers) {
}

AIGS_SuspicionEventActor* UIGS_SuspicionHelpersLibrary::SpawnSuspicionEventActorAttachedToComp(const UObject* inWCO, USceneComponent* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy, FName InBoneName) {
    return nullptr;
}

AIGS_SuspicionEventActor* UIGS_SuspicionHelpersLibrary::SpawnSuspicionEventActorAttached(const UObject* inWCO, AActor* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy) {
    return nullptr;
}

AIGS_SuspicionEventActor* UIGS_SuspicionHelpersLibrary::SpawnSuspicionEventActorAdvanced(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy) {
    return nullptr;
}

AIGS_SuspicionEventActor* UIGS_SuspicionHelpersLibrary::SpawnSuspicionEventActor(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy) {
    return nullptr;
}

bool UIGS_SuspicionHelpersLibrary::ShouldDetectSusComp(UIGS_SuspicionComponent* inSusComp, AActor* inDetector) {
    return false;
}

bool UIGS_SuspicionHelpersLibrary::ShouldDetectOffender(AActor* inOffender, AActor* inDetector) {
    return false;
}

void UIGS_SuspicionHelpersLibrary::MakeExplosionNoiseAndEvent(const AActor* inSource, AIGS_GameCharacterFramework* inInstigator, const float inLoudness) {
}

float UIGS_SuspicionHelpersLibrary::GetOffenceBasedDetectionMultiplier(UIGS_PlayerSuspicionComponent* inOffender, AActor* inDetector) {
    return 0.000000000e+00f;
}

float UIGS_SuspicionHelpersLibrary::GetAttributeBasedDetectionMultiplier(AIGS_GameCharacterFramework* inOffender) {
    return 0.000000000e+00f;
}

