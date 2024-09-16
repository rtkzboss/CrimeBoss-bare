#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_OnInteractionProgressEvent.h"
#include "InteractiveObjectDelegate.h"
#include "OnTimerInteractionEvent.h"
#include "IGS_UseComponent.generated.h"

class ACharacter;
class AIGS_IntelligentGameCharacter;
class AIGS_PlayerCharacter;
class AIGS_PlayerControllerFramework;
class UIGS_InteractiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_UseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_UseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Use(UIGS_InteractiveComponent* inInteractiveComponent, bool bIsHolding);

    UFUNCTION(BlueprintCallable)
    void SetInteractionEnabled(bool inState);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_UseReleased(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Use(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetLastInteraction(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server)
    void Server_PuzzleInteractionEnded(bool inResult, bool inStealthEnd);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PostAuthClient(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HoldSuccess(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HoldStarted(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HoldCanceled(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AuthUse(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION()
    void OnMovementModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);

    UFUNCTION(Client, Reliable, WithValidation)
    void Client_Rollback(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Client, Reliable, WithValidation)
    void Client_PostServerUseReleased(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(Client, Reliable, WithValidation)
    void Client_AuthUse(UIGS_InteractiveComponent* inInteractiveComponent);

    UFUNCTION(BlueprintCallable)
    void ClearVisualParts();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* PuzzleInteraction;

    UPROPERTY(EditAnywhere)
    float InteractionDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UniversalAnimationGameplayTag;

    UPROPERTY(EditAnywhere)
    float InteractionDotProductThreshold;

    UPROPERTY(EditAnywhere)
    bool IsInteractionEnabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InteractiveDeltaThreshold;

    UPROPERTY(BlueprintReadOnly)
    bool isCurrentlyUsingInteraction;

    UPROPERTY(BlueprintReadOnly)
    bool isCurrentlyHoldingInteraction;

    UPROPERTY(EditAnywhere)
    bool CanUseCarryables;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractiveObjectsNearPlayerForHUDAngleLimit;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float InteractiveObjectsNearPlayerForHUDAngleDotLimit;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_InteractiveComponent* ComponentToInteractWith;

    UPROPERTY(BlueprintReadOnly)
    FVector InteractionLookVector;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_InteractiveComponent* LastComponentToInteractWith;

    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_InteractiveComponent*> ObjectsWithVisibleOutline;

    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> AutoPickupInteractiveComponents;

    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> SnoozedComponents;

    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> InteractiveObjects;

    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> InteractiveObjectsNearPlayer;

    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> InteractiveObjectsNearPlayerForHUD;

    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> InteractiveObjectsToOutline;

    UPROPERTY(VisibleAnywhere)
    FVector CameraLocation;

    UPROPERTY(VisibleAnywhere)
    FVector CameraForwardVector;

    UPROPERTY()
    AIGS_PlayerControllerFramework* OwnerPlayerController;

    UPROPERTY()
    AIGS_IntelligentGameCharacter* OwnerPlayerPawn;

    UPROPERTY()
    AIGS_PlayerCharacter* OwnerPlayerCharacter;

    UPROPERTY(BlueprintAssignable)
    FOnTimerInteractionEvent OnTimerInteractionEvent;

    UPROPERTY(BlueprintAssignable)
    FInteractiveObjectDelegate OnInteractiveObjectIsNear;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnInteractionProgressEvent OnInteractionProgressEvent;

    UPROPERTY(VisibleAnywhere)
    bool isNearInteractible;

    UPROPERTY(VisibleAnywhere)
    bool isNotifiedAboutInteraction;

    UPROPERTY(VisibleAnywhere)
    bool isCurrentlyInteracting;

};
