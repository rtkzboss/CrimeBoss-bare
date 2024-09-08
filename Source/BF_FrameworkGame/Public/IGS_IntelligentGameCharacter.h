#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_SignificanceValue.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "GameplayTagContainer.h"
#include "IGS_CharacterThrowAwayCarryableDelegate.h"
#include "IGS_GameCharacterBase.h"
#include "IGS_RagdollCollisionHitDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_IntelligentGameCharacter.generated.h"

class AIGS_WieldableBase;
class UActorComponent;
class UAkAudioEvent;
class UArrowComponent;
class UGameplayAbility;
class UIGS_AimAssistTargetComponent;
class UIGS_AnimBudgetAllocatorComponent;
class UIGS_BleedingHandlerComponent;
class UIGS_CharacterPressureWatcherComponent;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_DecalContactShadowComponent;
class UIGS_FallDamageComponent;
class UIGS_FootstepsEventBasedComponent;
class UIGS_LootBagComponent;
class UIGS_ShootablePartsHandlerComponent;
class UIGS_SignificanceComponent;
class UIGS_ZiptieComponent;
class USkeletalMeshComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_IntelligentGameCharacter : public AIGS_GameCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    AIGS_WieldableBase* CurrentWieldable;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    FPoseSnapshot HeadSnapshot;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterThrowAwayCarryable OnCharacterThrowAwayCarryable;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_RagdollCollisionHit OnRagdollCollisionHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TakeWeaponGameplayTag;
    
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UIGS_SignificanceComponent* SignificanceComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGameplayAbility> GunDownAbility;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_CharacterWieldablesHolderComponent* CharacterWieldablesHolderComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsValidForAimAssist;
    
    UPROPERTY(EditAnywhere)
    float ExplorationZoomMagnification;
    
    UPROPERTY(EditAnywhere)
    float ExplorationZoomInSpeedMult;
    
    UPROPERTY(EditAnywhere)
    float ExplorationZoomOutSpeedMult;
    
    UPROPERTY(EditAnywhere)
    float LookAtMaxAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DoNotReduceWeaponPickupDamageForTeamSides;
    
    UPROPERTY(EditAnywhere)
    bool bUseAnimationForVisionCone;
    
    UPROPERTY(EditAnywhere)
    FName HeadBoneName;
    
    UPROPERTY(EditAnywhere)
    FName ChestBoneName;
    
    UPROPERTY(EditAnywhere)
    FName AimDummySocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DeathAkEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_FootstepsEventBasedComponent* FootstepEventBaseComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_LootBagComponent* LootBagComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_FallDamageComponent* FallDamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ShootablePartsHandlerComponent* ShootablePartsHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_ZiptieComponent* ZiptieComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UActorComponent* SniperAimComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UArrowComponent* AimAtArrowComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UArrowComponent* LookAtArrowComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UArrowComponent* PawnDirArrowComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_AnimBudgetAllocatorComponent* AnimBudgetAllocatorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DecalContactShadowComponent* DecalContactShadowComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_CharacterPressureWatcherComponent* PressureWatcherComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_AimAssistTargetComponent* AimAssistTargetComponent;
    
    UPROPERTY(EditAnywhere)
    FComponentReference HeadComponentReference;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_AnimationSeed)
    int32 mR_NextRandomAnimationSeed;
    
public:
    AIGS_IntelligentGameCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ThrowAwayBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnPocketBag(FTransform InTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnBag(FTransform InTransform) const;
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOrNextWeaponSlot(bool inPrevious);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOrNextWeaponInActiveSlot(bool inPrevious);
    
    UFUNCTION(BlueprintCallable)
    void SaveHeadSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void OverrideHeadComponent(USkeletalMeshComponent* InComponent);
    
protected:
    UFUNCTION()
    void OnRep_AnimationSeed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostSignificance(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MagCheck() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingMountedWeaponAndCanLeave() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingMountedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMagChecking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInspecting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inIsForce) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InterruptMagCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InterruptInspecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InspectWieldable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HolsterWeapon() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_LootBagComponent* GetLootBagComponent() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetHeadComp();
    
    UFUNCTION(BlueprintCallable)
    UIGS_BleedingHandlerComponent* GetBleedingComponent();
    
    UFUNCTION(BlueprintCallable)
    void ForceDestroyZiptieComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DropBag() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void DebugTick(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanInterruptReload() const;
    
    UFUNCTION(BlueprintPure)
    bool CanInterruptMagCheck() const;
    
    UFUNCTION(BlueprintPure)
    bool CanInterruptInspecting() const;
    
};

