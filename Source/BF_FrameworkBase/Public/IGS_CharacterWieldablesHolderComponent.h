#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableClass.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "Components/ActorComponent.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_ActiveWieldableChangeEventSignature.h"
#include "IGS_ActiveWieldableHolsterEventSignature.h"
#include "IGS_PrimarySlotChangeFailedEventSignature.h"
#include "IGS_WieldableAddedEventSignature.h"
#include "IGS_WieldableChangedEventSignature.h"
#include "IGS_WieldableExchange.h"
#include "IGS_WieldableRemovedEventSignature.h"
#include "IGS_WieldableSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterWieldablesHolderComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerFPVArmsFramework;
class AIGS_WieldableBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CharacterWieldablesHolderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CharacterWieldablesHolderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool WieldItem(UIGS_WieldableInventoryObjectBase* inInventoryObject);

    UFUNCTION(BlueprintCallable)
    void UnsetLocalPlayer();

    UFUNCTION(BlueprintCallable)
    bool SwapWieldableWithSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType);

    UFUNCTION(BlueprintCallable)
    void StartUsingMountedGun(AIGS_WieldableBase* inMountedGun, UIGS_WieldableInventoryObjectBase* inInventoryObject);

    UFUNCTION(BlueprintCallable)
    void SetForceHideWeapon(bool bInHide);

    UFUNCTION(BlueprintCallable)
    void SelectSlot(EIGS_WieldableSlot inSlotType);

    UFUNCTION(BlueprintCallable)
    void SelectPreviousSlot();

    UFUNCTION(BlueprintCallable)
    void SelectNextSlot();

    UFUNCTION(BlueprintCallable)
    void SelectLastSlot();

    UFUNCTION(BlueprintCallable)
    void SelectBestSlot();

    UFUNCTION(BlueprintCallable)
    void SelectAnySecondary(bool inFast);

    UFUNCTION(BlueprintCallable)
    void SelectAnyMelee(bool inFast);

    UFUNCTION(BlueprintCallable)
    void RemoveWieldableFromSlot(EIGS_WieldableSlot inSlotType);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetForceHideWeapon(const bool inHide);

    UFUNCTION(BlueprintPure)
    bool IsUnarmed() const;

    UFUNCTION(BlueprintCallable)
    void InitializeLocalPlayer(AIGS_PlayerFPVArmsFramework* inOwnerArmsActor);

    UFUNCTION(BlueprintPure)
    bool HasFreeSlot();

    UFUNCTION(BlueprintPure)
    bool HasAnySecondary();

    UFUNCTION(BlueprintPure)
    bool HasAnyMelee();

    UFUNCTION(BlueprintCallable)
    FIGS_WieldableSlot GetWieldableForSlot(EIGS_WieldableSlot inSlotType);

    UFUNCTION(BlueprintPure)
    EIGS_WieldableSlot GetSlotForWieldableClass(const TSoftClassPtr<AIGS_WieldableBase>& inWieldableClass) const;

    UFUNCTION(BlueprintPure)
    EIGS_WieldableSlot GetSlotForItem(UIGS_WieldableInventoryObjectBase* inItem) const;

    UFUNCTION(BlueprintPure)
    EIGS_WieldableSlot GetLastSlot() const;

    UFUNCTION(BlueprintPure)
    EIGS_WieldableSlot GetInitialSlot() const;

    UFUNCTION(BlueprintPure)
    bool GetForceHideWeapon() const;

    UFUNCTION(BlueprintPure)
    AIGS_WieldableBase* GetCurrentWieldableActor() const;

    UFUNCTION(BlueprintCallable)
    EIGS_WieldableSlot GetBestSlot();

    UFUNCTION(BlueprintPure)
    EIGS_WieldableSlot GetActiveSlot() const;

    UFUNCTION(BlueprintCallable)
    void FastUnholster();

    UFUNCTION(BlueprintCallable)
    void FastSelectSlot(EIGS_WieldableSlot inNewSlot);

    UFUNCTION(BlueprintCallable)
    void FastHolster(bool inNotifySlotChanged);

    UFUNCTION(BlueprintPure)
    bool CanWield(TSubclassOf<UIGS_WieldableInventoryObjectBase> inClass);

    UFUNCTION(BlueprintCallable)
    bool AddWieldableToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType);

    UFUNCTION(BlueprintCallable)
    EIGS_WieldableSlot AddWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject);

    UFUNCTION(BlueprintCallable)
    bool AddOrSwapWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject, bool inSelect);

    UPROPERTY(VisibleAnywhere)
    bool bForceHideWeapon;

    UPROPERTY(BlueprintAssignable)
    FIGS_ActiveWieldableHolsterEventSignature OnActiveWieldableHolsterEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_ActiveWieldableChangeEventSignature OnActiveWieldableBeginChange;

    UPROPERTY(BlueprintAssignable)
    FIGS_ActiveWieldableChangeEventSignature OnActiveWieldableChanged;

    UPROPERTY(BlueprintAssignable)
    FIGS_PrimarySlotChangeFailedEventSignature OnPrimarySlotChangeFailed;

    UPROPERTY(BlueprintAssignable)
    FIGS_WieldableAddedEventSignature OnWieldableAddedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WieldableRemovedEventSignature OnWieldableRemovedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_WieldableChangedEventSignature OnWieldableChangedEvent;

    UPROPERTY()
    bool CanBeUnholstered;

    UPROPERTY()
    EIGS_WieldableSlot InitialSlot;

    UPROPERTY(BlueprintReadWrite)
    bool IsCookingEquipment;

protected:
    UPROPERTY(VisibleAnywhere)
    AIGS_WieldableBase* CurrentWieldableActor;

    UPROPERTY(VisibleAnywhere)
    EIGS_WieldableSlot CurrentSlotType;

    UPROPERTY(VisibleAnywhere)
    EIGS_WieldableSlot LastSlotType;

    UPROPERTY(VisibleAnywhere)
    bool bIsUnarmed;

    UPROPERTY(VisibleAnywhere)
    EIGS_WieldableClass CurrentWieldableClass;

    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_WieldableSlot> WieldableSlots;

    UPROPERTY(VisibleAnywhere)
    FIGS_WieldableExchange WieldableExchange;

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> Owner;

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIGS_PlayerFPVArmsFramework> OwnerArmsActor;

    UPROPERTY(VisibleAnywhere)
    bool bIsFirstPerson;

    UPROPERTY(VisibleAnywhere)
    bool bIsLocallyControlled;

    UPROPERTY(EditDefaultsOnly)
    bool bHasCustomSlotFiltering;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReduceWeaponDamageForTeamSides;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> ReducedWeaponDamageEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery AllowedWieldables;

};
