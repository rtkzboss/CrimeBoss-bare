#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_TileItemState.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_TileItemDataStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_TileItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag ItemId;

    UPROPERTY(BlueprintReadWrite)
    FGameplayTag EntitlementTag;

    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadWrite)
    FText Name;

    UPROPERTY(BlueprintReadWrite)
    FText Description;

    UPROPERTY(BlueprintReadWrite)
    int32 Price;

    UPROPERTY(BlueprintReadWrite)
    bool IsNew;

    UPROPERTY(BlueprintReadWrite)
    bool IsChallenge;

    UPROPERTY(BlueprintReadWrite)
    bool HasCustomAction;

    UPROPERTY(BlueprintReadWrite)
    FText CustomActionText;

    UPROPERTY(BlueprintReadWrite)
    bool IsEquiped;

    UPROPERTY(BlueprintReadWrite)
    FText CustomEquipedText;

    UPROPERTY(BlueprintReadWrite)
    bool IsTaken;

    UPROPERTY(BlueprintReadWrite)
    FText CustomTakenText;

    UPROPERTY(BlueprintReadWrite)
    EMETA_ItemQuality Rarity;

    UPROPERTY(BlueprintReadWrite)
    EIGS_TileItemState State;

    UPROPERTY(BlueprintReadWrite)
    EIGS_UnlockCategory Category;

    FIGS_TileItemDataStruct();
};
