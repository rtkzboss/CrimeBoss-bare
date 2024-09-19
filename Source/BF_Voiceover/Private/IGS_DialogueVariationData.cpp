#include "IGS_DialogueVariationData.h"
#include "EIGS_DialogueGroup.h"

FIGS_DialogueVariationData::FIGS_DialogueVariationData() {
    (*this).VariantID = -1;
    (*this).Priority = 10;
    (*this).DiscardRule = EIGS_DialogueDiscard::None;
    (*this).PlayChance = 1;
    (*this).SuspicionState = EIGS_DialogueSuspicionState::None;
    (*this).LevelRange = 0;
    (*this).IsDisabled = false;
    (*this).CanPlaySingle = true;
    (*this).Cooldown = 0.000000000e+00f;
    (*this).DelayMin = 0.000000000e+00f;
    (*this).DelayMax = 0.000000000e+00f;
    (*this).VoicesMedia = TArray<FIGS_VoiceMediaInfo>{};
    (*this).VoicesMediaList = TArray<FIGS_VoiceMediaInfo>{};
    (*this).CensoredMediaList = TArray<FIGS_VoiceMediaInfo>{};
    (*this).IsTTS = false;
    (*this).FacialAnimation = nullptr;
    (*this).SubtitleKey = FText::GetEmpty();
    (*this).SubtitleKeyEng = FText::GetEmpty();
    (*this).CustomCharacterName = FText::GetEmpty();
    (*this).TriggerDialogue.Group = EIGS_DialogueGroup::None;
    (*this).TriggerDialogue.DialogueID = NAME_None;
}
