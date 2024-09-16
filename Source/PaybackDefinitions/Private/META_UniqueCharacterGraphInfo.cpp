#include "META_UniqueCharacterGraphInfo.h"

FMETA_UniqueCharacterGraphInfo::FMETA_UniqueCharacterGraphInfo() {
    (*this).Graph = FSoftObjectPath();
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).UnlockTag, 0)) = NAME_None;
    (*this).LoadoutOverride.PrimaryWeapon = nullptr;
    (*this).LoadoutOverride.SecondaryWeapon = nullptr;
    (*this).LoadoutOverride.Equipment.Equipment = nullptr;
}
