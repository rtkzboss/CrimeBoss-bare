#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterMood.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ItemQuality.h"
#include "META_ChangedHeisterAttributeInfo.h"
#include "IGS_CharacterTraits.h"
#include "IGS_GameplayEffect_Class.h"
#include "META_HeisterLoadout.h"
#include "META_PerkData.h"
#include "Templates/SubclassOf.h"
#include "META_CharacterData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GenericVariantID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Surname;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MetaCharacterIcon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanLevelUp;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseUpkeepCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseMissionCutPercent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MaxLeveled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseHireCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeaponsCostCoefficient;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 JobsCanBeCompletedPerDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Injuries;

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
    TSubclassOf<UIGS_GameplayEffect_Class> Class;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_CharacterTraits Attributes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> Variables;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_HeisterLoadout Loadout;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionsWasPlayed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MutableVariationIndex;

    UPROPERTY(BlueprintReadWrite)
    int32 TimesHealed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTemporary;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLocked;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseLevelUpMultiplier;

    FMETA_CharacterData();
};
