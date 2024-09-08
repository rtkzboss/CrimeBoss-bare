#pragma once
#include "CoreMinimal.h"
#include "META_AdditionalConditionChance.generated.h"

class UMETA_BaseCondition;

USTRUCT(BlueprintType)
struct FMETA_AdditionalConditionChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMETA_BaseCondition* Condition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Chance;
    
    CRIMEBOSSMETA_API FMETA_AdditionalConditionChance();
};

