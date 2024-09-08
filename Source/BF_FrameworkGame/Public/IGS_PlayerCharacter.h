#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "ShoutScanData.h"
#include "IGS_GameplayAbilityGrantDataHolder.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "EIGS_Ethnicity.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_DeathCameraEndedSignatureDelegate.h"
#include "IGS_IntelligentGameCharacter.h"
#include "IGS_OnZiptyingEventDelegate.h"
#include "IGS_PlayerStateChangedSignatureDelegate.h"
#include "IGS_ReplicatedLadder.h"
#include "IGS_SuspicionInterface.h"
#include "OnPlayerUseStopDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerCharacter.generated.h"

class AActor;
class AController;
class AIGS_GameCharacterFramework;
class AIGS_PlayerFPVArms;
class AIGS_PlayerStateGame;
class AIGS_RideableVehicleBaseFramework;
class AIGS_SecurityCameraViewer;
class UAkAudioEvent;
class UAkStateValue;
class UAkSwitchValue;
class UCustomizableSkeletalComponent;
class UGameplayAbility;
class UIGS_BasherComponent;
class UIGS_CampThreatMeterComponent;
class UIGS_CarryableInteractiveComponent;
class UIGS_EthnicityVoices;
class UIGS_InteractiveComponent;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UIGS_LootBagInteractiveComponent;
class UIGS_MeleeWeaponInventoryObject;
class UIGS_PlayerCameraComponent;
class UIGS_PlayerCharacterMovementComponent;
class UIGS_PlayerCommandComponent;
class UIGS_PlayerEffectsComponent;
class UIGS_PlayerIgnoreCollisionComponent;
class UIGS_PlayerLoadoutComponent;
class UIGS_PlayerMetaTransferComponent;
class UIGS_PlayerPingComponent;
class UIGS_PlayerSuppressionHandlerComponent;
class UIGS_PlayerSuspicionComponent;
class UIGS_PlayerWorldTracingComponent;
class UIGS_PostProcessManagerComponent;
class UIGS_ReviveComponent;
class UIGS_ThrowableInventoryObject;
class UIGS_ThrowableTrajectoryComponent;
class UIGS_UseComponent;
class USpringArmComponent;

UCLASS(Abstract, Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PlayerCharacter : public AIGS_IntelligentGameCharacter, public IIGS_HeisterNumberInterface, public IIGS_HeisterDataInterface, public IIGS_SuspicionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerUseStop OnPlayerUseStop;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DeathCameraEndedSignature OnDeathCameraSkippable;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_DeathCameraEndedSignature OnDeathCameraEnded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnZiptyingEvent OnZiptyingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_PlayerStateChangedSignature OnPlayerStateChangedEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_UseComponent* UseComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerPingComponent* PingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ReviveComponent* ReviveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerSuspicionComponent* PlayerSuspicionComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USpringArmComponent* SpringArmComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerCommandComponent* PlayerCommandComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerWorldTracingComponent* PlayerWorldTracingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_BasherComponent* UnarmedMeleeBasherComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UIGS_EthnicityVoices* EthnicityVoices;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_MeleeWeaponInventoryObject> DefaultUnarmedMeleeItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGameplayAbility> DefaultUnarmedMeleeAbility;
    
    UPROPERTY(VisibleAnywhere)
    float DefaultAimingChangePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float VisibilityCrouchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* Child3PVCameraActor;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ListInventory* PlayerInventory;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float DeathCamUnskippableTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float DeathCamMaximumTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsSomeoneSpectating;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsInDeathCam;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bDeathCamSkippable;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsInSpectatingCam;
    
    UPROPERTY(Replicated)
    uint8 R_Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanSlide;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bCanUseUnarmedMelee;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LastTeleportableLocation;
    
    UPROPERTY()
    bool m_IsPendingCarryable;
    
protected:
    UPROPERTY()
    int32 CachedLootBagCount;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerCameraComponent* Camera;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AIGS_PlayerFPVArms> DefaultArmsAsset;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    AIGS_PlayerFPVArms* m_ArmsActor;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PostProcessManagerComponent* PostProcessManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerEffectsComponent* PlayerEffectsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerSuppressionHandlerComponent* SuppressionHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerIgnoreCollisionComponent* PlayerIgnoreCollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerLoadoutComponent* PlayerLoadoutComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerMetaTransferComponent* PlayerMetaTransferComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_CampThreatMeterComponent* CampThreatMeterComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_LootBagInteractiveComponent* LootBagInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_CarryableInteractiveComponent* CarryableInteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_ThrowableTrajectoryComponent* ThrowableTrajectoryComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FIGS_GameplayAbilityGrantDataHolder> DefaultGrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CarryableInteractionSocket;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* FallAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* FallDeathAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ZiptieMountAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* ZiptieDismountAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* RappelMountAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* RappelDismountAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* RappelSlowDownAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* NotOutOfBoundsAkState;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* OutOfBoundsAkState;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* PersonPrespectiveFPPAkSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* PersonPrespectiveTPPAkSwitch;
    
    UPROPERTY(BlueprintReadOnly)
    FText CharNameForDialogues;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> TmpShoutCharacters;
    
public:
    AIGS_PlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Use(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSpectatingCam(bool inIsSpectating);
    
    UFUNCTION(BlueprintCallable)
    void UnarmedMeleeAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerMagazineSuspicion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchToDeathCamera();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SwapPlayerWithBotController(AController* inBotController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SwapPlayerForBotWhileDead(AController* inBotController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SwapPlayer(int32 inBotNumber);
    
    UFUNCTION(BlueprintNativeEvent)
    void ShowChatWheelIcon(const FText& inIconText);
    
    UFUNCTION(BlueprintCallable)
    void Shout(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlayerOutline(bool inShowPlayerOutline);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomVoiceAccordingToEthnicityAndGender();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInInteraction(const bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInElevator(const bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetIgnoreRoomSecurityOffence(bool inIgnore) const;
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRadialMenuInput(bool bNewMenuInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePingInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMenuInput(bool bNewMenuInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLockpickInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInteractionInput(bool bNewInteractionInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreBotSwapInput(bool bNewBotSwapInput);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceRotation(FRotator NewControlRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetArmsTortillaEffect(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetArmsHidden(bool inHidden);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Shout(FShoutScanData inScanData);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_RequestStopCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(Reliable, Server)
    void Server_RequestPlayCustomMontage(FGameplayTag inCustomAnimType);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ProxyEnterCameraFeed();
    
public:
    UFUNCTION(Reliable, Server)
    void Server_PerformStealthTakedown(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnInteractionEnded(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnInteracting(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnBagCountChanged(int32 inCount);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HandleSpectating();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AbilityUnequip();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreRadialMenuInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreMenuInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreInteractionInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreBotSwapInput();
    
    UFUNCTION(BlueprintCallable)
    void ProxyEnterCameraFeed(AIGS_SecurityCameraViewer* InViewer);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PostArmsLoadedEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Ping() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OwnerUnpossess();
    
    UFUNCTION(BlueprintNativeEvent)
    void OwnerPossess();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPlayerStateChanged(AIGS_PlayerStateGame* inPlayerState);
    
protected:
    UFUNCTION()
    void OnEnemyKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyDeathCameraSkippable();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDeathCameraEnded();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RequestStopCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RequestPlayCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayZiptieMountEvent();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayZiptieDismountEvent();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayRappelSlowDownEvent();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayRappelMountEvent();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayRappelDismountEvent();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnInteractionEnded(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnInteracting(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnBagCountChanged(int32 inCount);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_DeathSoundEffect();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CheatChangeSize(float InSize);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void MessageToServer_LadderInput(FIGS_ReplicatedLadder inLadderData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LeaveLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void JumpFromLadder() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingVehicle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingBuzzsaw() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsThirdPersonCamActive();
    
    UFUNCTION(BlueprintPure)
    bool IsSlidingOnZipline() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRappelling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRadialMenuInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPingInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnLadder() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMenuInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInVentShaft() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInInteraction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInElevator() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBotSwapInputIgnored() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectating();
    
    UFUNCTION(BlueprintCallable)
    static EIGS_DialogueHeisterCharacter GetVoiceAccordingToEthnicityAndGender(UIGS_EthnicityVoices* inEthnicityVoices, EIGS_Ethnicity inEthnicity, bool inIsFemale);
    
    UFUNCTION(BlueprintPure)
    AIGS_RideableVehicleBaseFramework* GetUsedVehicle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowPlayerOutline();
    
    UFUNCTION(BlueprintPure)
    UIGS_PlayerCommandComponent* GetPlayerCommandComponent() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_PlayerCharacterMovementComponent* GetPlayerCharacterMovementComponent();
    
    UFUNCTION(BlueprintPure)
    UIGS_PlayerCameraComponent* GetPlayerCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsAimingAtFriendly() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsAimingAtEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    static EIGS_Ethnicity GetEthnicityFromMutable(UCustomizableSkeletalComponent* inCSCBody);
    
    UFUNCTION(BlueprintPure)
    EIGS_TeamSideEnum GetAimingAtTeamside() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_TeamSideEnum GetAimAtTeam() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetAimAtCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAimAtActor() const;
    
    UFUNCTION(BlueprintPure)
    float GetAbilityRechargeMult() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAbility1ChargeCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceCancelHoldInputs();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceAndUseInteraction(UIGS_InteractiveComponent* inInteraction);
    
    UFUNCTION(BlueprintCallable)
    void ForceAndUseClientInteraction(UIGS_InteractiveComponent* inInteraction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableSpectateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DoMantle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableSpectateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableDeathCam();
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_ForceUseInteraction(UIGS_InteractiveComponent* inInteraction);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_CameraSpy(AIGS_SecurityCameraViewer* inCamera);
    
    UFUNCTION(Client, Reliable)
    void Client_AddItemsAfterSwitch(const TArray<TSubclassOf<UIGS_InventoryObjectFramework>>& inItems);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddItem(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanMoveOnLadder() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAndRemoveAbility1();
    
    UFUNCTION(BlueprintCallable)
    void CallOnChangeShowPrediction(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

