#include "IGS_EntitlemensFunctionLibrary.h"

UIGS_EntitlemensFunctionLibrary::UIGS_EntitlemensFunctionLibrary() {
}

bool UIGS_EntitlemensFunctionLibrary::IsUserEntitledTo(const UObject* inWCO, FGameplayTag inGameplayTag) {
    return false;
}

bool UIGS_EntitlemensFunctionLibrary::IsEntitlementDLC(const UObject* inWCO, FGameplayTag inGameplayTag) {
    return false;
}

void UIGS_EntitlemensFunctionLibrary::GetEntitlementOwnedSavedDiff(const UObject* inWCO, const TArray<FGameplayTag> inOwnedEntitlements, const TArray<FGameplayTag> inSavedEntitlements, bool& outAnyMissingInSave, bool& outAnyMissingCurrent) {
}

