#pragma once
#include "CoreMinimal.h"
#include "META_DetectiveID.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "META_DetectiveInfo.h"
#include "Templates/SubclassOf.h"
#include "META_HeatManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_HeatManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 DaysLeftForTheHeatRevision;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_Heat HeatState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float HeatValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float PoliceInvestigationValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_Gang SheriffTargetGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EMETA_Gang, int32> GangsAttacksCounter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSubclassOf<UMETA_DetectiveID>> DetectivesPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> ActiveDetectives;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSet<int32> UsedInvestigationValuesForDetectives;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSubclassOf<UMETA_DetectiveID>> DeadDetectives;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> InvestigationEffects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> HeatEffects;

    FMETA_HeatManagerSaveData();
};
