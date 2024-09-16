#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_PerkClass.h"
#include "EIGS_PerkType.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "IGS_GameplayEffect_PerkFPS.h"
#include "IGS_UnlockProperties.h"
#include "Templates/SubclassOf.h"
#include "IGS_PerkData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_PerkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_PerkType PerkType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_PerkClass PerkClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerkCategory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerkModeUsage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> AllowedHeistersOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ForbiddenHeistersLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MutuallyExclusiveTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowedForGeneration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_GameplayEffect_PerkFPS> SiblingID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerkLevel;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GameplayEffect_PerkBase> SwapPerkIDAfterPromotion;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag SwapPerkTagAfterPromotion;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockProperties UnlockProperties;

    COMMON_DATA_API FIGS_PerkData();
};
