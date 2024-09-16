#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "IGS_ChainContractID.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "IGS_MissionResult.h"
#include "IGS_Quick_ChainPlayerCharacters.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_ChainResult.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText MissionName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UIGS_ChainContractID> ChainContractID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 StarRating;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Score;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 MoneyRewardTotal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 RespectRewardAfterLastMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> WeaponsReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> WeaponTagsReward;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_MissionResult> QuickMissionResults;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_Quick_ChainPlayerCharacters> PlayerHeisters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FCommonHeisterData> RemainingHeisters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool Completed;

    FIGS_Quick_ChainResult();
};
