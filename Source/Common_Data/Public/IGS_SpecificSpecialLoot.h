#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SpecificSpecialLoot.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SpecificSpecialLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag LootType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Value;
    
    COMMON_DATA_API FIGS_SpecificSpecialLoot();
};

