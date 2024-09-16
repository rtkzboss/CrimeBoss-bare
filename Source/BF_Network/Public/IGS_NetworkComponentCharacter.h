#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_CharacterState.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_Speed.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_BagType.h"
#include "EIGS_SpecialActionType.h"
#include "IGS_LootBagInfo.h"
#include "IGS_ReplicatedLadder.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_LootBagItemHolder.h"
#include "IGS_ThrowableInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_LeanSide.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_PlayVariationData.h"
#include "EIGS_AdvancedMovementEvent.h"
#include "IGS_BagInfo.h"
#include "IGS_BashResultNetwork.h"
#include "IGS_NetProjectileData.h"
#include "IGS_NetProjectileHitData.h"
#include "IGS_NetProjectileHitResult.h"
#include "IGS_NetworkDialogueEvent.h"
#include "IGS_ReplicatedAcceleration.h"
#include "IGS_ReplicationAnimationDataHolder.h"
#include "IGS_ReplicationCharacterAimingDataHolder.h"
#include "IGS_WieldableReplicatedData.h"
#include "Templates/SubclassOf.h"
#include "IGS_NetworkComponentCharacter.generated.h"

class AActor;
class AIGS_PickupActorBase;
class UAkCallbackInfo;
class UAkSwitchValue;
class UIGS_ComponentDialogueDataAsset;
class UIGS_ComponentVoiceExpressionDataAsset;
class UIGS_PickupClassesData;
class UIGS_WeaponSkinData;
class UIGS_WieldableInventoryObjectBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentCharacter : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_NetworkComponentCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopVoice(const FIGS_PlayVariationData& inPlayVariationData);

    UFUNCTION(BlueprintCallable)
    void SetUniversalDataByItemID(int32 inID, FIGS_InventoryObjectUniversalData inUniversalData);

    UFUNCTION(BlueprintCallable)
    void Set2DModeEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FIGS_PlayVariationData& inPlayVariationData);

    UFUNCTION()
    void OnWieldableRemoved(EIGS_WieldableSlot inSlot);

    UFUNCTION()
    void OnWieldableAddedToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlot);

    UFUNCTION()
    void OnSlotChanged(EIGS_WieldableSlot inSlot);

protected:
    UFUNCTION()
    void OnRep_ShooterType();

private:
    UFUNCTION()
    void OnRep_RequestLeadSide() const;

    UFUNCTION()
    void OnRep_ReplicatedLadder() const;

    UFUNCTION()
    void OnRep_ReplicatedAcceleration() const;

protected:
    UFUNCTION()
    void OnRep_PlayingAnimations();

private:
    UFUNCTION()
    void OnRep_MovementSpeed() const;

protected:
    UFUNCTION()
    void OnRep_LootBagInfo(FIGS_BagInfo inOldInfo) const;

    UFUNCTION()
    void OnRep_LookAtPoint() const;

private:
    UFUNCTION()
    void OnRep_LeaningDirection() const;

protected:
    UFUNCTION()
    void OnRep_IsVisibilityModOn() const;

    UFUNCTION()
    void OnRep_IsRunningAttack();

private:
    UFUNCTION()
    void OnRep_IsMovingForced() const;

    UFUNCTION()
    void OnRep_IsMantling() const;

    UFUNCTION()
    void OnRep_CurrentSlot();

protected:
    UFUNCTION()
    void OnRep_CharacterState() const;

    UFUNCTION()
    void OnRep_CharacterAiming() const;

private:
    UFUNCTION()
    void OnRep_AvailableWieldables();

protected:
    UFUNCTION()
    void OnRep_AimAtPoint() const;

    UFUNCTION()
    void OnExpressionVoiceDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);

    UFUNCTION()
    void OnCurrentlyFilledBagChanged();

    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_RequestAnimationTaskTag(FGameplayTag inMontageTag, float inRequestedDuration, int32 inRandomSeed);

    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_AnimationTaskCanceledTag(FGameplayTag inMontageTag, EIGS_AnimationTaskFinishedReason inCancelReason, int32 inRandomSeed);

    UFUNCTION(Server, Unreliable)
    void MessageToServer_WeaponMagCheckInterrupt();

    UFUNCTION(Server, Unreliable)
    void MessageToServer_WeaponMagCheck();

public:
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_UpdateAvailableWieldables(const TArray<FIGS_WieldableReplicatedData>& inWieldables);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ToggleVisibility(bool inVisible);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ThrowThrowable(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inSpawnLocation, const FQuat& inSpawnRotation, bool inThrowLow, float inTimeHeldInHand);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ThrowAwayItem(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass);

    UFUNCTION(Reliable, Server)
    void MessageToServer_ThrowAwayBag(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform, bool inThrow);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_StopAttack();

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_SpawnMovingProjectile(const FTransform& inSpawnTransform);

    UFUNCTION(Reliable, Server)
    void MessageToServer_SpawnBag(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_Shoot(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList);

private:
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_SetRequestedLeanSide(EIGS_LeanSide inRequestedLeanSide);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_SetMovementSpeed(EIGS_Speed inMovementSpeed);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_SetLeaningDirection(EIGS_CharacterLeaningDirectionEnum inLeaningDirection);

public:
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_SetCurrentSlot(EIGS_WieldableSlot inSlot);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_Reload(bool inIsCombat, bool inIsEmptyMagazine);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_PocketLootClear();

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_PocketLootAdded(TSubclassOf<UIGS_InventoryObjectFramework> inPocketLoot);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_PlantThrowable(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inPlantLocation, const FRotator& inPlantRotation);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_OnThrowStart(bool inThrowLow);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_OnThrowFinish(bool inThrowLow);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_OnThrowCancel(bool inThrowLow);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_OnPlayerSpecialAction(EIGS_SpecialActionType inType);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_OnLootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_OnCurrentLootBagChanged(const TArray<FIGS_LootBagInfo>& inBagInfos);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_NotifyHitBash(const FIGS_BashResultNetwork& inBashData);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_NotifyHit(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_MeleeAttack(EIGS_MeleeAttackType inMeleeAttackType);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ItemRemoved(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ItemAdded(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_InventoryCleared();

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_InterruptReload(EIGS_ReloadInterruptReasonEnum inInterruptReason, bool inImmediateInterrupt);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ExplodedInHand(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_DropDownItem(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_DetonateThrowable(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_CharacterAim(bool inIsAiming, float inAimInSpeedMult, float inAimOutSpeedMult);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ChangeShooter(EIGS_WeaponAttackType inAttackType);

    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_BeginAttack();

private:
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_AdvancedMovementEvent(EIGS_AdvancedMovementEvent inAdvancedMovementEvent);

protected:
    UFUNCTION(Client, Reliable)
    void MessageToClient_Rollback(AActor* inActor, float inHealth) const;

    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_WeaponMagCheckInterrupt();

    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_WeaponMagCheck();

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_StopAttack();

    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_Shoot(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_Reload(bool inIsCombat, bool inIsEmptyMagazine);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_OnThrowStart(bool inThrowLow);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_OnThrowFinish(bool inThrowLow);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_OnThrowCancel(bool inThrowLow);

    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_OnPlayerSpecialAction(EIGS_SpecialActionType inType);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_MeleeAttack(EIGS_MeleeAttackType inMeleeAttackType);

private:
    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_IsMovingForced(bool inIsMovingForced);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_InterruptReload(EIGS_ReloadInterruptReasonEnum inInterruptReason, const bool inImmediateInterrupt);

    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_HitSynchronizedBash(const FIGS_BashResultNetwork& inBashData);

    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_HitSynchronized(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_ChangeShooter(EIGS_WeaponAttackType inAttackType);

    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_BeginAttack();

private:
    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_AdvancedMovementEvent(EIGS_AdvancedMovementEvent inAdvancedMovementEvent);

public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayingVoice(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter);

    UFUNCTION(BlueprintCallable)
    float GetVoiceProgress(int32 inGroupID);

    UFUNCTION(BlueprintCallable)
    FIGS_InventoryObjectUniversalData GetUniversalDataByItemID(int32 inID);

    UFUNCTION(BlueprintPure)
    float GetPlayerBaggedLootWeight();

protected:
    UFUNCTION(NetMulticast, Reliable)
    void All_ResetVoiceSFX(uint16 inGroupID);

    UFUNCTION(NetMulticast, Reliable)
    void All_OnStopVoice(FIGS_PlayVariationData inPlayVariationData);

    UFUNCTION(NetMulticast, Reliable)
    void All_OnPlayVoice(FIGS_PlayVariationData inPlayVariationData);

    UPROPERTY(VisibleAnywhere)
    UIGS_PickupClassesData* PickupClasses;

    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_AimAtPoint)
    FIGS_InterestPointHolder mR_AimAtPoint;

    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_LookAtPoint)
    FIGS_InterestPointHolder mR_LookAtPoint;

    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_CharacterAiming)
    FIGS_ReplicationCharacterAimingDataHolder mR_CharacterAiming;

    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_PlayingAnimations)
    FIGS_ReplicationAnimationDataHolder mR_PlayingAnimation;

    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_LootBagInfo)
    FIGS_BagInfo mR_LootBagInfo;

    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    TArray<FIGS_LootBagInfo> mR_FullLootBagInfos;

    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_CharacterState)
    EIGS_CharacterState mR_CharacterState;

private:
    UPROPERTY(ReplicatedUsing=OnRep_MovementSpeed)
    EIGS_Speed mR_MovementSpeed;

    UPROPERTY(ReplicatedUsing=OnRep_RequestLeadSide)
    EIGS_LeanSide mR_RequestedLeanSide;

    UPROPERTY(ReplicatedUsing=OnRep_LeaningDirection)
    EIGS_CharacterLeaningDirectionEnum mR_LeaningDirection;

    UPROPERTY(ReplicatedUsing=OnRep_IsMovingForced)
    bool mR_IsMovingForced;

    UPROPERTY(ReplicatedUsing=OnRep_IsMantling)
    bool mR_IsMantling;

    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedAcceleration)
    FIGS_ReplicatedAcceleration mR_ReplicatedAcceleration;

    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedLadder)
    FIGS_ReplicatedLadder mR_ReplicatedLadder;

protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsVisibilityModOn)
    bool mR_IsVisibilityModOn;

    UPROPERTY(ReplicatedUsing=OnRep_IsRunningAttack)
    bool mR_IsRunningAttack;

    UPROPERTY(ReplicatedUsing=OnRep_ShooterType)
    EIGS_WeaponAttackType mR_ShooterType;

private:
    UPROPERTY(ReplicatedUsing=OnRep_AvailableWieldables)
    TArray<FIGS_WieldableReplicatedData> mR_AvailableWieldables;

    UPROPERTY()
    TArray<UIGS_InventoryObjectFramework*> m_OwningInventoryObjects;

    UPROPERTY(ReplicatedUsing=OnRep_CurrentSlot)
    EIGS_WieldableSlot mR_CurrentSlot;

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_NetworkDialogueEvent OnVoiceStartedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_NetworkDialogueEvent OnVoiceStopedEvent;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* OverrideCharacterAkSwitch;

    UPROPERTY()
    UIGS_ComponentDialogueDataAsset* ComponentData;

    UPROPERTY()
    UIGS_ComponentVoiceExpressionDataAsset* Data;

    UPROPERTY()
    UIGS_ComponentDialogueDataAsset* DialogueData;

    UPROPERTY(EditAnywhere)
    bool VoiceExpressionEnabled;

    UPROPERTY(EditAnywhere)
    float NearDeathHealthPercentage;

    UPROPERTY()
    UAkSwitchValue* SpeakerAkSwitch;

    UPROPERTY()
    UAkSwitchValue* CharacterAkSwitch;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
