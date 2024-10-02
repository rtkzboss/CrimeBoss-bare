#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "GameplayTagContainer.h"
#include "WieldableAbstract.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WieldableAction.h"
#include "IGS_WieldableIsAimingSignature.h"
#include "IGS_WieldableReloadSignature.h"
#include "IGS_WieldableBase.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_DynamicMaterialHandlerComponent;
class UIGS_InventoryObjectFramework;
class UIGS_WieldableInventoryObjectBase;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class USkeletalMeshComponentBudgeted;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_WieldableBase : public AWieldableAbstract {
    GENERATED_BODY()
public:
    AIGS_WieldableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UsesAmmo();

    UFUNCTION(BlueprintCallable)
    void ToggleVisibilityMod();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ThrowAway(bool inForceSyncLoads);

    UFUNCTION(BlueprintCallable)
    void SecondaryAction(EIGS_WieldableAction InAction);

    UFUNCTION(BlueprintCallable)
    void Reload();

    UFUNCTION(BlueprintCallable)
    void PrimaryAction(EIGS_WieldableAction InAction);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnWieldableIsReady();

    UFUNCTION(BlueprintNativeEvent)
    void OnWieldableIsBeingRemoved();

    UFUNCTION(BlueprintNativeEvent)
    void OnWieldableAim(bool inIsAiming);

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwnerDiedBlueprintEvent();

    UFUNCTION(BlueprintCallable)
    void MagCheck();

    UFUNCTION(BlueprintPure)
    bool IsUsingSecondaryAction() const;

    UFUNCTION(BlueprintPure)
    bool IsUsingPrimaryAction() const;

    UFUNCTION(BlueprintPure)
    bool IsUnholstering() const;

    UFUNCTION(BlueprintPure)
    bool IsTortilla() const;

    UFUNCTION(BlueprintPure)
    bool IsReloading() const;

    UFUNCTION(BlueprintPure)
    bool IsHolsteringOrUnholstering() const;

    UFUNCTION(BlueprintPure)
    bool IsHolstering() const;

    UFUNCTION(BlueprintPure)
    bool IsAiming() const;

    UFUNCTION(BlueprintCallable)
    void InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inForce);

    UFUNCTION(BlueprintCallable)
    void InspectWieldable();

    UFUNCTION(BlueprintPure)
    bool HasMultipleZoomLevels() const;

    UFUNCTION(BlueprintCallable)
    bool HasFullAmmo();

    UFUNCTION(BlueprintCallable)
    bool HasAmmo();

    UFUNCTION(BlueprintPure)
    EIGS_ItemType GetWieldableType() const;

    UFUNCTION(BlueprintPure)
    UIGS_WieldableInventoryObjectBase* GetWieldableObject() const;

    UFUNCTION(BlueprintPure)
    UIGS_InventoryObjectFramework* GetInventoryObject() const;

    UFUNCTION(BlueprintCallable)
    void ForceStopActions();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Drop(bool inForceSyncLoads);

    UFUNCTION(BlueprintCallable)
    void Die();

    UFUNCTION(BlueprintCallable)
    void ChangeZoomBy(int32 inAmount);

    UFUNCTION(BlueprintPure)
    bool CanUseSecondaryAction() const;

    UFUNCTION(BlueprintPure)
    bool CanUsePrimaryAction() const;

    UFUNCTION(BlueprintPure)
    bool CanUseActions() const;

    UFUNCTION(BlueprintNativeEvent)
    bool CanThrowAway(bool inForceSyncLoads);

    UFUNCTION(BlueprintCallable)
    bool CanReload();

    UFUNCTION(BlueprintPure)
    bool CanLean() const;

    UFUNCTION(BlueprintCallable)
    bool CanInterruptReload();

    UFUNCTION(BlueprintCallable)
    bool CanDropOrThrowInternal(bool inForceSyncLoads);

    UFUNCTION(BlueprintNativeEvent)
    bool CanDrop(bool inForceSyncLoads);

    UFUNCTION(BlueprintPure)
    bool CanAim() const;

    UFUNCTION(BlueprintCallable)
    int32 AmmoCount();

    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwnerPawn;

    UPROPERTY(BlueprintAssignable)
    FIGS_WieldableReloadSignature OnWeaponBeginReloadSignature;

    UPROPERTY(BlueprintAssignable)
    FIGS_WieldableReloadSignature OnWeaponStopReloadSignature;

    UPROPERTY(BlueprintAssignable)
    FIGS_WieldableIsAimingSignature OnWieldableIsAimingSignature;

protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasCollision;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsUsingPrimaryAction;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsUsingSecondaryAction;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAiming;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsHolstering;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsUnholstering;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentZoomLevel;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialParameterCollection* WieldableMPC;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialParameterCollectionInstance* WieldableMPCInstance;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DynamicMaterialHandlerComponent* DynamicMaterialHandlerComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* WieldableMesh;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTagContainer GameplayTags;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* StopInspectingAkEvent;

};
