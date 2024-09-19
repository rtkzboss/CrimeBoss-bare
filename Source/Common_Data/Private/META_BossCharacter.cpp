#include "META_BossCharacter.h"
#include "EIGS_CharacterID.h"
#include "EMETA_CharacterState.h"

UMETA_BossCharacter::UMETA_BossCharacter() {
    (*this).m_CharacterInfo.ID = EIGS_CharacterID::Char_Boss_End;
    (*this).m_CharacterInfo.Data.State = EMETA_CharacterState::Available;
    (*this).m_CharacterInfo.Data.Perks = TArray<FMETA_PerkData>{FMETA_PerkData{}, FMETA_PerkData{}, FMETA_PerkData{}, FMETA_PerkData{}};
}

void UMETA_BossCharacter::SetPerkInSlot(int32 inSlot, FGameplayTag inTagID) {
}

void UMETA_BossCharacter::SetCharacterSkinTag(FGameplayTag inSkinTag) {
}

int32 UMETA_BossCharacter::GetSlotByPerkTag(FGameplayTag inTagID) const {
    return 0;
}

FMETA_PerkData UMETA_BossCharacter::GetPerkInSlot(int32 inSlot) const {
    return FMETA_PerkData{};
}

FGameplayTag UMETA_BossCharacter::GetEquippedSecondaryWeaponID() const {
    return FGameplayTag();
}

FGameplayTag UMETA_BossCharacter::GetEquippedPrimaryWeaponID() const {
    return FGameplayTag();
}

FGameplayTag UMETA_BossCharacter::GetCharacterSkinTag() const {
    return FGameplayTag();
}

