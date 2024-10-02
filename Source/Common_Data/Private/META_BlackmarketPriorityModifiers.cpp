#include "META_BlackmarketPriorityModifiers.h"

FMETA_BlackmarketPriorityModifiers::FMETA_BlackmarketPriorityModifiers() {
    (*this).NotEquipped = 0;
    (*this).NotOwned = 0;
    (*this).WasGeneratedPreviously = 0;
    (*this).EntitlementItem = 0;
    (*this).PerItemID = TMap<FGameplayTag, int32>{};
    (*this).PerWeaponClass = TMap<FGameplayTag, int32>{};
}
