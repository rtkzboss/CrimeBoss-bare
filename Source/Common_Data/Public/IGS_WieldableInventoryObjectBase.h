#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_WieldableBaseData.h"
#include "IGS_WieldableInventoryObjectBase.generated.h"

class UIGS_WeaponSkinData;

UCLASS(Abstract)
class COMMON_DATA_API UIGS_WieldableInventoryObjectBase : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UIGS_WieldableInventoryObjectBase();

    UFUNCTION(BlueprintCallable)
    bool WasAlreadyEquipped();

    UFUNCTION(BlueprintPure)
    bool IsSecondary();

    UFUNCTION(BlueprintPure)
    bool IsPrimary();

    UFUNCTION(BlueprintPure)
    bool IsMelee();

    UFUNCTION(BlueprintPure)
    bool IsExplosive();

    UFUNCTION(BlueprintCallable)
    FIGS_WieldableBaseData GetWieldableDataBP();

    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetCurrentSpecificSkin();

    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetCurrentDefaultSkin();

    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetBaseSkin();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTagContainer WieldableStateTagsContainer;

};
