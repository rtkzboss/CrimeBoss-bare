#include "IGS_DangerAreaVolume.h"
#include "NavModifierComponent.h"

AIGS_DangerAreaVolume::AIGS_DangerAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
    auto gen2 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).DangerType, 0)) = TEXT("RestrictedAITags.GeneralReaction.Danger.Area");
    (*this).NavModifier = gen;
    (*this).Color.B = 0;
    (*this).Color.G = 128;
    (*this).Color.R = 255;
    (*this).bGenerateOverlapEvents = false;
}

void AIGS_DangerAreaVolume::SetEnabled(bool inEnabled) {
}

