#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerksPreference.h"
#include "META_Interval.h"
#include "EIGS_PerkClass.h"
#include "META_HeisterPerksEconomyData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterPerksEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_Interval AmountOfPerks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_Interval PowerfulPerks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxNegativePerks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxNegativePerksForPromotion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinPerksForPromotion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PerkClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_PerkClass, EMETA_PerksPreference> Preference;
    
    FMETA_HeisterPerksEconomyData();
};

