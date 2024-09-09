#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_DialogueGroup.h"
#include "EIGS_LevelRangeBit.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_CharacterIDInterface.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "IGS_BodyInfo.h"
#include "IGS_CharacterAimEventSignatureDelegate.h"
#include "IGS_CharacterHitEventSignatureDelegate.h"
#include "IGS_CrouchChangedEventSignatureDelegate.h"
#include "IGS_DialogueInterface.h"
#include "IGS_GameplayTagsChangedOnCharacterDynamicSignatureDelegate.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_PickupThrownSignatureDelegate.h"
#include "IGS_PossessedByDynamicSignatureDelegate.h"
#include "IGS_WieldAnyItemInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameCharacterFramework.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SquadFramework;
class UAbilitySystemComponent;
class UAkComponent;
class UAkStateValue;
class UAkSwitchValue;
class UDamageType;
class UGameplayEffect;
class UIGS_CharacterData;
class UIGS_CharacterMaskBase;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_DamageHandlerComponentFramework;
class UIGS_DealtDamageEventsWatcher;
class UIGS_DownStateHandlerComponentFramework;
class UIGS_GASAttributeSetBase;
class UIGS_GASComponentBase;
class UIGS_GameCharacterMovementComponent;
class UIGS_ObjectStatus;
class UIGS_OutlineComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USkinnedDecalSampler;

UCLASS(Abstract)
class BF_FRAMEWORKBASE_API AIGS_GameCharacterFramework : public ACharacter, public IGenericTeamAgentInterface, public IIGS_GameplayTagAssetInterfaceCustom, public IIGS_DialogueInterface, public IVisualLoggerDebugSnapshotInterface, public IIGS_HasObjectStatusInterface, public IAbilitySystemInterface, public IIGS_CharacterIDInterface, public IIGS_WieldAnyItemInterface {
    GENERATED_BODY()
public:
    AIGS_GameCharacterFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WantsAim() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateBodyInfo();
    
    UFUNCTION(BlueprintNativeEvent)
    void TriggerFallDeath();
    
    UFUNCTION(BlueprintCallable)
    void SubdueBy(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Stun(const float inDuration) const;
    
    UFUNCTION(BlueprintCallable)
    void SetSquad(AIGS_SquadFramework* inSquad);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtPoint(FIGS_InterestPointHolder inInterestPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenPlayerIncludingWeapon(bool inHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetFacePoint(FIGS_InterestPointHolder inInterestPoint, bool inForcePoint);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableVoice(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterHidden(bool inHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCanAttack(bool inAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCanSelectPrimaryWeaponSlots(bool inEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCanBeUnholstered(bool inEnabled) const;
    
    UFUNCTION(BlueprintCallable)
    void SetAimAtPoint(FIGS_InterestPointHolder inInterestPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> inGameplayEffectClass, float inLevel, FGameplayEffectContextHandle inEffectContext);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable)
    void ReportDamageDealt(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTagsCounted(FGameplayTagContainer inTagsToRemove, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer inTagsToRemove, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTagCounted(FGameplayTag inTagToRemove, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag inTagToRemove, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void PerformStealthTakedown(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnMontageStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnMontageFinished();
    
protected:
    UFUNCTION()
    void OnRep_IsMovementDisabled();
    
public:
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ReportDamageDealt(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintPure)
    bool IsRobot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNPC() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMeleeOnly() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlledPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldingAim() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCombatStance() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAliveInNormalHealthState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAiming();
    
    UFUNCTION(BlueprintPure)
    bool IsAIControlled() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_UnitSpecialization GetUnitSpecialization() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_TeamSideEnum GetTeamSideId() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_SquadFramework* GetSquad() const;
    
    UFUNCTION(BlueprintPure)
    USkinnedDecalSampler* GetSkinnedDecalSampler() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxBagCount() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UIGS_CharacterMaskBase> GetMaskID() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_InterestPointHolder GetLookAtPoint() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsCarryingLootBag() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsCarrying() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHeadOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHeadBoneLocation();
    
    UFUNCTION(BlueprintPure)
    UIGS_GameCharacterMovementComponent* GetGameCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFeetLocation() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_InterestPointHolder GetFacePoint() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEyesLocation(float inHeightRelativeMult) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDialogueGroupID() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_DialogueGroup GetDialogueGroup() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_LevelRangeBit GetDialogueCharacterLevel() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_DialogueGroupCharacterHolder GetDialogueCharacterHolder() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetDialogueCharacter() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentBagCount() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentAim() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChestOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetChestBoneLocation();
    
    UFUNCTION(BlueprintPure)
    UIGS_CharacterWieldablesHolderComponent* GetCharacterWieldableHolder() const;
    
    UFUNCTION(BlueprintPure)
    float GetCharacterWieldableFPVModelScaleMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCharacterWieldable3PVModelScaleMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCharacterCanAttack();
    
    UFUNCTION(BlueprintPure)
    bool GetCanUsePrimaryWithLootBag() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanSelectPrimaryWeaponSlots() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanBeUnholstered() const;
    
    UFUNCTION(BlueprintPure)
    float GetBagsPercentage() const;
    
    UFUNCTION(BlueprintPure)
    UAkComponent* GetAkAudioComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAimAtPosition() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_InterestPointHolder GetAimAtPoint() const;
    
    UFUNCTION(BlueprintPure)
    bool GameplayTagsMatchesQuery(const FGameplayTagQuery& inQuery) const;
    
    UFUNCTION()
    void EnableMovementAndCollision();
    
    UFUNCTION(BlueprintPure)
    bool DoesBagExist() const;
    
    UFUNCTION()
    void DisableMovementAndCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CancelCurrentAnimationTask(EIGS_AnimationTaskFinishedReason inReason) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeUnarmed() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable)
    void Aim(bool inOn, bool inForceStop);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedGameplayTags(FGameplayTagContainer inTagsToAdd, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedGameplayTag(FGameplayTag inTagToAdd, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTagsCounted(FGameplayTagContainer inTagsToAdd, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(FGameplayTagContainer inTagsToAdd, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTagCounted(FGameplayTag inTagToAdd, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag inTagToAdd, bool inRemoveTimed);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* AkEnviroSwitchIndoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* AkEnviroSwitchOutdoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AkEnviroStateIndoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AkEnviroStateOutdoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_DialogueGroupCharacterHolder DialogueHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnedForFirstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_BodyInfo BodyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MutableRootGroupName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTagContainer InitSpawnTags;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AActor* LeftHandAttachedActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AActor* RightHandAttachedActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UPhysicalMaterial*> PhysicalMaterialToPreloadImpacts;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PossessedByDynamicSignature OwnerOnPossessedByEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PossessedByDynamicSignature ServerOnlyOnPossessedByEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PossessedByDynamicSignature OwningClientOnPossessedByEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PickupThrownSignature OnPickupThrown;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CrouchChangedEventSignature OnCrouchingChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterHitEventSignature OnCharacterHitEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterAimEventSignature OnCharacterAimEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_GameplayTagsChangedOnCharacterDynamicSignature OnGameplayTagsChangedEvent;
    
    UPROPERTY()
    TSubclassOf<UDamageType> CharacterDeathCauseType;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FIGS_InterestPointHolder DesiredLookAtPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FIGS_InterestPointHolder DesiredAimAtPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_CharacterData* CharacterData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DamageHandlerComponentFramework* DamageHandlerComponent2;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DealtDamageEventsWatcher* DealtDamageEventsWatcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DownStateHandlerComponentFramework* DownStateHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_OutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_GASComponentBase* GASComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USkinnedDecalSampler* SkinnedDecalSampler;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_GASAttributeSetBase* GASAttributeSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SquadID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LastSquadID;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float CurrentAim;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bWantsAim;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bCanAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStartsWithCombatStance;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bCombatStance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsMovementDisabled)
    bool mR_IsMovementDisabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    EIGS_CharacterID CharacterIDEnum;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    int32 GenericCharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsMaxLeveled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CharacterSkinID;
    
private:
    UPROPERTY(Instanced)
    UIGS_GameCharacterMovementComponent* GameCMC;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override PURE_VIRTUAL(GetAbilitySystemComponent, return nullptr;);
    UFUNCTION(BlueprintCallable)
    void SetIsMaxLeveled(bool inIsMaxLeveled) override PURE_VIRTUAL(SetIsMaxLeveled,);
    
    UFUNCTION(BlueprintCallable)
    void SetGenericVariant(int32 inGenericVariant) override PURE_VIRTUAL(SetGenericVariant,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSkinID(FGameplayTag inTagID) override PURE_VIRTUAL(SetCharacterSkinID,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(EIGS_CharacterID inCharacterID) override PURE_VIRTUAL(SetCharacterID,);
    
    UFUNCTION(BlueprintCallable)
    bool IsMaxLeveled() const override PURE_VIRTUAL(IsMaxLeveled, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGenericVariant() const override PURE_VIRTUAL(GetGenericVariant, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetCharacterSkinID() const override PURE_VIRTUAL(GetCharacterSkinID, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    EIGS_CharacterID GetCharacterID() const override PURE_VIRTUAL(GetCharacterID, return EIGS_CharacterID::Char_Unknown;);
    
};

