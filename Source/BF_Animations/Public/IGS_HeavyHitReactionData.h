#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_HeavyHitReactionData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_HeavyHitReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> AnimVariations;
    
    FIGS_HeavyHitReactionData();
};

