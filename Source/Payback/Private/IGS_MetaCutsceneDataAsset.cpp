#include "IGS_MetaCutsceneDataAsset.h"

UIGS_MetaCutsceneDataAsset::UIGS_MetaCutsceneDataAsset() {
    (*this).CutsceneLevel = FSoftObjectPath();
    (*this).SetupLevel = FSoftObjectPath();
    (*this).HideLevel = true;
    (*this).IsSkippable = true;
    (*this).ForceChoiceResult = EIGS_MetaCutsceneNodeAction::None;
}

FGameplayTag UIGS_MetaCutsceneDataAsset::GetEventIDTag() const {
    return FGameplayTag{};
}

TArray<FGameplayTag> UIGS_MetaCutsceneDataAsset::GetAllChoicesTags() {
    return {};
}

