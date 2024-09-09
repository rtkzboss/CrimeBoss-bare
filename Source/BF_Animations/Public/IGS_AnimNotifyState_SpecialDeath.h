#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "IGS_AnimNotifyState_SpecialDeath.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class BF_ANIMATIONS_API UIGS_AnimNotifyState_SpecialDeath : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UIGS_AnimNotifyState_SpecialDeath();

    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
};

