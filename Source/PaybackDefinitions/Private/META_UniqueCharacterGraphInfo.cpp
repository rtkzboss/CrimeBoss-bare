#include "META_UniqueCharacterGraphInfo.h"

FMETA_UniqueCharacterGraphInfo::FMETA_UniqueCharacterGraphInfo() {
    (*this).Graph = FSoftObjectPath();
    (*this).UnlockTag = FGameplayTag();
    (*this).LoadoutOverride.PrimaryWeapon = nullptr;
    (*this).LoadoutOverride.SecondaryWeapon = nullptr;
    (*this).LoadoutOverride.Equipment.Equipment = nullptr;
}
