#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CommonHeisterLoadout.h"
#include "META_PerkData.h"
#include "META_HeisterRandomizedData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterRandomizedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 FinalCost;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 FinalUpkeep;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MissionCut;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTagContainer Traits;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FMETA_PerkData> Perks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCommonHeisterLoadout Loadout;

    FMETA_HeisterRandomizedData();
};
