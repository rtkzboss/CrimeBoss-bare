#include "IGS_ChainMission.h"

FIGS_ChainMission::FIGS_ChainMission() {
    (*this).ID = nullptr;
    (*this).Name = FText::GetEmpty();
    (*this).Type = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).MenuImage = FSoftObjectPath();
    (*this).Description = FText::GetEmpty();
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).UnlockCriteriaTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ContractSelectedVOType, 0)) = NAME_None;
    (*this).IntroCutscene = FText::GetEmpty();
    (*this).IntroMovie = nullptr;
    (*this).FailCutsceneOverride = FText::GetEmpty();
    (*this).FailMovieOverride = nullptr;
    (*this).OutroCutscene = FText::GetEmpty();
    (*this).OutroCutsceneChoiceForce = EIGS_MetaCutsceneNodeAction::MoveToNode;
    (*this).OutroMovie = nullptr;
    (*this).CrewID = nullptr;
    (*this).ChainStep = {};
    (*this).Star1Rewards = {};
    (*this).Star2Rewards = {};
    (*this).Star3Rewards = {};
}
