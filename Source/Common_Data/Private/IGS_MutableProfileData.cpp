#include "IGS_MutableProfileData.h"

FIGS_MutableProfileData::FIGS_MutableProfileData() {
    (*this).MutableInstanceTPP = nullptr;
    (*this).MutableInstanceFPV = nullptr;
    (*this).OverridePopulation = nullptr;
    (*this).MutableProfile.StoredArchive = TArray<uint8>{};
    (*this).CharacterIcon = FSoftObjectPath();
    (*this).bUseSecondPopulation = false;
    (*this).DialogueID = EIGS_DialogueHeisterCharacter::None;
}
