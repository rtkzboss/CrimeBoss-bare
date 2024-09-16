#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_JobResult.h"
#include "EMETA_RespectLvl.h"
#include "META_FPSMissionInfo.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_MoneyMakingMissionRowInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MoneyMakingMissionRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MapIconOverride;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysOnMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCrewSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCrewSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> WeaponsRequired;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> CharactersRequired;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> CharactersRequiredButNotOwned;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMETA_JobResult> ResultsWhenJobIsNotRemovedFromTheMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FPSMissionInfo FPSMissionInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl UnlockRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer LootType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MissionTypeTags;

    FMETA_MoneyMakingMissionRowInfo();
};
