#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "IGS_CameraViewerCamerasDisabledEventDelegate.h"
#include "IGS_CameraViewerChangeCameraEventDelegate.h"
#include "IGS_CameraViewerIsUsedChangedEventDelegate.h"
#include "IGS_SubControllerMountableInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_SecurityCameraViewer.generated.h"

class AController;
class AIGS_DetectorBase;
class AIGS_GameCharacterFramework;
class AIGS_SecurityCamera;
class AIGS_SentryControllerPlayerBase;
class UAkAudioEvent;
class UAkComponent;
class UAkStateValue;
class UIGS_InteractiveComponent;
class UStaticMeshComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_SecurityCameraViewer : public APawn, public IIGS_SubControllerMountableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_CameraViewerChangeCameraEvent OnActiveCameraChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CameraViewerCamerasDisabledEvent OnCamerasDisabled;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CameraViewerIsUsedChangedEvent OnIsUsedChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AllCamerasDisabled)
    bool mR_AllCamerasDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowFreezing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTemporaryDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TemporaryDisableDuration;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AllowDisablingCameras)
    bool mR_AllowDisablingCameras;
    
    UPROPERTY(ReplicatedUsing=OnRep_PossedPawn)
    AIGS_DetectorBase* PossedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetListenerOnPossessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* EnterAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* ExitAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_SentryControllerPlayerBase> SecurityCameraPlayerController;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AIGS_SentryControllerPlayerBase* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* MonitorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAkComponent* AkAudioListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* EnterCameraAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ExitCameraAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ServoStartAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ServoStopAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ChangeCameraAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AkStateMountNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AkStateMountSecurityCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkStateValue* AkStateMountSecurityCameraNoSignal;
    
    UPROPERTY()
    AController* DefaultController;
    
public:
    AIGS_SecurityCameraViewer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseCameraViewer(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHUD(int32 inActiveCameraIndex, bool inIsDisabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowHUD(int32 inActiveCameraIndex, int32 inCameraSourcesCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerHUDVisibility(bool inState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanSwitchCameras(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSources(TArray<AIGS_SecurityCamera*> inCameras);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_TurnCamera(float inAxisValue) const;
    
    UFUNCTION(Reliable, Server)
    void Server_LookUpCamera(float inAxisValue) const;
    
    UFUNCTION(Reliable, Server)
    void Server_FreezeCamera();
    
    UFUNCTION(Reliable, Server)
    void Server_ExitCameraControl();
    
    UFUNCTION(Reliable, Server)
    void Server_DisableAllCameras();
    
    UFUNCTION(Reliable, Server)
    void Server_ChangeCamera(bool inNextCamera);
    
    UFUNCTION()
    void OnRep_PossedPawn(AIGS_DetectorBase* inPreviousPossedPawn);
    
    UFUNCTION()
    void OnRep_AllowDisablingCameras();
    
    UFUNCTION()
    void OnRep_AllCamerasDisabled();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisableTimerChanged(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void OnClientInteractiveUsed(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION()
    void OnCameraDestroyed(AIGS_DetectorBase* inDetector);
    
    UFUNCTION()
    bool IsAnyValidCamera();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActiveCameraDisabled() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HideHUD();
    
public:
    UFUNCTION(BlueprintCallable)
    AIGS_GameCharacterFramework* GetUser();
    
    UFUNCTION(BlueprintPure)
    int32 GetSourcesCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveCameraIndex() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_SecurityCamera* GetActiveCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAllCameras();
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_OnActiveCameraChanged(AIGS_SecurityCamera* inCamera, int32 inActiveCameraID, bool inIsDisabled);
    
    UFUNCTION(Client, Reliable)
    void Client_ExitCameraControl(int32 inActiveCameraID);
    
    UFUNCTION(Client, Reliable)
    void Client_EnterCameraControl(int32 inActiveCameraID, int32 inCameraSourcesCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AllowDisablingCameras(bool InValue);
    

    // Fix for true pure virtual functions not being implemented
};

