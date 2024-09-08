#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_BossEliminationReward.h"
#include "EMETA_ItemQuality.h"
#include "META_BossEliminationRewardData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BossEliminationRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_BossEliminationReward RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality WeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> WeaponSkinTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID Heister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality HeisterQuality;
    
    FMETA_BossEliminationRewardData();
};

