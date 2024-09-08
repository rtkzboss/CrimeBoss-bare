#pragma once
#include "CoreMinimal.h"
#include "IGS_SpecificSpecialLoot.h"
#include "IGS_SpecialLoot.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SpecialLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FIGS_SpecificSpecialLoot> Loot;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsFilled;
    
    COMMON_DATA_API FIGS_SpecialLoot();
};

