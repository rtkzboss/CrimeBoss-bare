#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_JobResult.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_ReturnedDataProcessingMode.h"
#include "EMETA_TurfActionAfterSuccess.h"
#include "META_FPSMissionInfo.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_FPSMissionRowInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_FPSMissionRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_FPSMissionSubtype MissionSubtype;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MapIconOverride;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Objective;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysOnMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SupportIntel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntelSoldierMultiplier;

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
    EMETA_ReturnedDataProcessingMode ReturnedDataProcessingMode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootPercentageFromSuccess;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TurfActionAfterSuccess TurfActionAfterSuccess;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_AIBossStrengthChangeIntensity StrengthChangeIntensity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_FPSMissionInfo FPSMissionInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ObjectivesPreset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl UnlockRespect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UnlockTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer LootType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MissionTypeTags;

    FMETA_FPSMissionRowInfo();
};
