#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactHitParameter.h"
#include "EIGS_ItemPropertyFlags.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_ModInventoryObject.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupActorInventoryItem.generated.h"

class AActor;
class AController;
class UIGS_OutlineComponent;
class UIGS_PickupInteractiveComponent;
class UIGS_WeaponSkinData;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_PickupActorInventoryItem : public AIGS_PickupActorBase {
    GENERATED_BODY()
public:
    AIGS_PickupActorInventoryItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass);

protected:
    UFUNCTION()
    void OnRep_WeaponSkin();

    UFUNCTION()
    void OnRep_UniversalData();

    UFUNCTION()
    void OnRep_ItemMods();

    UFUNCTION()
    void OnRep_ItemCount();

    UFUNCTION()
    void OnRep_ItemClass();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupDamageEvent(float inDamage, const FHitResult& inHitInfo, AController* inEventInstigator, AActor* inDamageCauser);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeshUpdated();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    FIGS_ImpactHitParameter OnCustomizeHitImpactParam(FIGS_ImpactHitParameter InParams);

public:
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetMeshBounds();

    UFUNCTION(BlueprintCallable)
    bool DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag);

    UFUNCTION(BlueprintCallable)
    void ChangeSkin(TSoftObjectPtr<UIGS_WeaponSkinData> inNewSkin, TSoftObjectPtr<UIGS_WeaponSkinData> inNewSpecificSkin);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyUniversalData(FIGS_InventoryObjectUniversalData inUniversalData);

    UFUNCTION(BlueprintCallable)
    void AddMods(const TArray<TSubclassOf<UIGS_ModInventoryObject>>& inMods);

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_PickupInteractiveComponent* InteractiveComponent;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_OutlineComponent* OutlineComponent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_WeaponSkin)
    TSoftObjectPtr<UIGS_WeaponSkinData> R_WeaponSkin;

    UPROPERTY()
    UIGS_WeaponSkinData* LoadedWeaponSkin;

    UPROPERTY()
    UIGS_WeaponSkinData* LoadedWeaponSpecificSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemClass)
    TSubclassOf<UIGS_InventoryObjectFramework> R_ItemClassToAdd;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ItemMods)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> R_ItemModsToAdd;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCount)
    int32 R_GlobalItemCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCount)
    bool R_bCustomStackCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCount)
    int32 R_EquipmentCount;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_UniversalData)
    FIGS_InventoryObjectUniversalData R_UniversalData;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText PrefixText;

protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool mR_bWasDropped;

private:
    UPROPERTY(VisibleAnywhere)
    bool m_bIsGlobalItem;

    UPROPERTY(VisibleAnywhere)
    bool m_bIsEquipment;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
