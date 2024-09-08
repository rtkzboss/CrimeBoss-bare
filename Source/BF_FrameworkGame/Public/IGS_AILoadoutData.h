#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AILoadoutData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AILoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag WeaponTag;
    
    UPROPERTY(EditAnywhere)
    int32 Chance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NormalizedChance;
    
    FIGS_AILoadoutData();
};

