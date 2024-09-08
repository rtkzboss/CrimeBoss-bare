#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_TileReward.h"
#include "META_TileRewardData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_TileRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TileReward RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> WeaponSkinTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality WeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> Weapons;
    
    FMETA_TileRewardData();
};

