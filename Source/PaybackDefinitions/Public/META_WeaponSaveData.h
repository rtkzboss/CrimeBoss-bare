#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_ItemSaveDataBase.h"
#include "META_WeaponSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_WeaponSaveData : public FMETA_ItemSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalPercentageOfWeaponPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SuccessfulMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysInShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> TargetWeaponsForUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality TargetQualityToUpdateWeapon;
    
    PAYBACKDEFINITIONS_API FMETA_WeaponSaveData();
};

