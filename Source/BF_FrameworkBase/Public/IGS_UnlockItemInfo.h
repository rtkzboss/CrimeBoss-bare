#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UnlockItemInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_UnlockItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UnlockCategory UnlockCategory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> UnlockCoverImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag RequiredEntitlementID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequiredTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RequiredValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowIfNotOwned;

    BF_FRAMEWORKBASE_API FIGS_UnlockItemInfo();
};
