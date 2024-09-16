#include "IGS_UnlockReward.h"
#include "EIGS_CharacterID.h"

FIGS_UnlockReward::FIGS_UnlockReward() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Type = EIGS_RewardType::UNKNOWN;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).UnlockTip = FText::GetEmpty();
    (*this).CharacterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CharacterData.bMaxLevel = false;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissionContractData.MissionID, 0)) = NAME_None;
}
