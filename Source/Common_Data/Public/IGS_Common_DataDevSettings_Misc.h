#pragma once
#include "CoreMinimal.h"
#include "IGS_Common_DataDevSettings_Base.h"
#include "IGS_Common_DataDevSettings_Misc.generated.h"

class UDataAsset;
class UDataTable;
class UGameplayEffect;
class UMaterialInterface;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_Common_DataDevSettings_Misc : public UIGS_Common_DataDevSettings_Base {
    GENERATED_BODY()
public:
    UIGS_Common_DataDevSettings_Misc();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> InvalidMaterialGray;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> InvalidMaterialPink;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> AssetsPreloaderDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> EntitlementItemsDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> PerksDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> PerkStatsDataAsset;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> ClassDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> InitAbilityChargesEffect;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> AddAbilityChargesEffect;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataAsset> FPSDifficultyDA;

};
