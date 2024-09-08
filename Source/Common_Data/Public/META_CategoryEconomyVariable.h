#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_EconomyGraphVariableModeData.h"
#include "META_CategoryEconomyVariable.generated.h"

USTRUCT()
struct COMMON_DATA_API FMETA_CategoryEconomyVariable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FMETA_EconomyGraphVariableModeData> GraphEconomyVariables;
    
    FMETA_CategoryEconomyVariable();
};

