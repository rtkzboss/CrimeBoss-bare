#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_CharacterMood.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ItemQuality.h"
#include "META_ChangedHeisterAttributeInfo.h"
#include "META_HeisterLoadoutSave.h"
#include "META_HeisterSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_HeisterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemPrice;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeItemPrice;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArrayIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanLevelUp;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseHireCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UpkeepCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionCutPercent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Injuries;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MaxLeveled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 JobsCanBeCompletedPerDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CharacterState State;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CharacterMood Mood;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer Traits;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_PerkData> Perks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_ChangedHeisterAttributeInfo> ChangedHeisterAttributes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> Variables;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_HeisterLoadoutSave Loadout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionsWasPlayed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TimesHealed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTemporary;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseLevelUpMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnseenInShop;

    FMETA_HeisterSaveData();
};
