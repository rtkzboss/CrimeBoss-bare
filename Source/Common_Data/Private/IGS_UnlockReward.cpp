#include "IGS_UnlockReward.h"
#include "EIGS_CharacterID.h"

FIGS_UnlockReward::FIGS_UnlockReward() {
    (*this).ID = FGameplayTag();
    (*this).Type = EIGS_RewardType::UNKNOWN;
    (*this).Name = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).UnlockTip = FText::GetEmpty();
    (*this).CharacterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CharacterData.bMaxLevel = false;
    (*this).MissionContractData.MissionID = FGameplayTag();
}
