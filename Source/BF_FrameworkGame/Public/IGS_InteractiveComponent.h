#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_InteractionStateChangedDelegate.h"
#include "IGS_OnClientHoldCanceledSignatureDelegate.h"
#include "IGS_OnClientHoldStartedSignatureDelegate.h"
#include "IGS_OnClientUseReleasedSignatureDelegate.h"
#include "IGS_OnClientUsedSignatureDelegate.h"
#include "IGS_OnServerHoldCanceledSignatureDelegate.h"
#include "IGS_OnServerHoldStartedSignatureDelegate.h"
#include "IGS_OnServerUseReleasedSignatureDelegate.h"
#include "IGS_OnServerUsedSignatureDelegate.h"
#include "IGS_OnWarningChangedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_InteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;
class APawn;
class UIGS_InventoryObjectFramework;
class UIGS_OutlineComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractiveComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_InteractionStateChanged OnInteractionEnabledStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnServerUsedSignature OnServerUsedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnClientUsedSignature OnClientUsedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnServerUseReleasedSignature OnServerUseReleasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnClientUseReleasedSignature OnClientUseReleasedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnServerHoldStartedSignature OnServerHoldStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnClientHoldStartedSignature OnClientHoldStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnServerHoldCanceledSignature OnServerHoldCanceledEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnClientHoldCanceledSignature OnClientHoldCanceledEvent;
    
    UPROPERTY(BlueprintCallable)
    FIGS_OnWarningChangedSignature OnWarningChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SingleUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Enabled)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBeEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsHoldable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bServerFirst;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHolsterWhenHolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimerHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText NameToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TSubclassOf<UIGS_InventoryObjectFramework> NeededItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> WhitelistedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> BlacklistedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InteractionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutlineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HUDDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InteractionDistanceOnly2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionBottomZTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDotThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseRootForOutline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowOutline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideMasterOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReleaseLookInputAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFrontFacingOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUncrouchBeforeUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsUsableWithCarryable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCarryableInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoPickupIgnoresObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SuspicionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspicionTagsKeepTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bManuallyRemoveTags;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool R_bIsSuspicious;
    
    UPROPERTY(ReplicatedUsing=OnRep_bIsBeingUsed)
    bool R_bIsBeingUsed;
    
    UPROPERTY(Replicated)
    APawn* R_CurrentlyUsingInstigator;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsEscapeInteraction;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsObjectiveCompleted;
    
private:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> m_PrimitiveComponentsToOutline;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    bool mR_WasUsed;
    
    UPROPERTY(Instanced)
    UIGS_OutlineComponent* m_OutlineComponent;
    
public:
    UIGS_InteractiveComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Use(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void StopUse(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspicionTags(FGameplayTagContainer inSuspicionTags);
    
    UFUNCTION(BlueprintCallable)
    void SetNeededItem(TSubclassOf<UIGS_InventoryObjectFramework> inItem);
    
    UFUNCTION(BlueprintCallable)
    void SetNameToDisplay(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldable(bool inHoldable, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentsToOutline(const TArray<USceneComponent*>& inComponentsToOutline);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeEnabled(bool inCanBeEnabled);
    
    UFUNCTION(BlueprintNativeEvent)
    void Server_UseReleased(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Server_Use(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Server_PostAuthClient(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Server_HoldStarted(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Server_HoldCanceled(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    bool Server_CanUse(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveSusTags(AIGS_GameCharacterFramework* inInstigator) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnServerRollback(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION()
    void OnRep_Enabled();
    
    UFUNCTION()
    void OnRep_bIsBeingUsed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPuzzleInteractionEnded(bool inResult, bool inStealthEnd);
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_UseReleased(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_Use(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_Rollback(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_PostServer(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_HoldStarted(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void Client_HoldCanceled(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Client_CanUse(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Client_CanUnlock(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void AI_Use(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddSusTags(AIGS_GameCharacterFramework* inInstigator) const;
    
};

