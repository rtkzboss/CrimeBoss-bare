#include "IGS_LoadingScreenSetup.h"

FIGS_LoadingScreenSetup::FIGS_LoadingScreenSetup() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).BackgroundTexture = FSoftObjectPath();
    (*this).ThrobberSprite = FSoftObjectPath();
    (*this).BinkMoviePaths = {};
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TipsTagContainer, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TipsTagContainer, 0)) = {};
    (*this).Tips = {};
    (*this).ControllerTips = {};
    (*this).KeyboardMouseTips = {};
}
