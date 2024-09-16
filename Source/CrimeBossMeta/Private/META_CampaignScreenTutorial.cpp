#include "META_CampaignScreenTutorial.h"

FMETA_CampaignScreenTutorial::FMETA_CampaignScreenTutorial() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).screenTag, 0)) = NAME_None;
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).TutorialID, 0)) = NAME_None;
    (*this).ShowEvenFinished = false;
}
