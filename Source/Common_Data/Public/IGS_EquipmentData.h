#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_EquipmentResourceType.h"
#include "IGS_CommonItemData.h"
#include "IGS_UnlockProperties.h"
#include "IGS_EquipmentData.generated.h"

class UGameplayEffect;
class UIGS_ThrowableInventoryObject;
class UObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_EquipmentData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UIGS_ThrowableInventoryObject> Throwable;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowedForGeneration;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PriceModifier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_EquipmentResourceType ResourceType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Charges;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRefreshChargesOvertime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SecondsUntilChargeRefresh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRefreshChargesWithKills;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 KillsToChargeRefresh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Cooldown;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> InitChargesGameplayEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> AddChargesGameplayEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString InventoryIconStringGlyph;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UObject* InventoryIconOverrideFontObject;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockProperties UnlockProperties;

    FIGS_EquipmentData();
};
