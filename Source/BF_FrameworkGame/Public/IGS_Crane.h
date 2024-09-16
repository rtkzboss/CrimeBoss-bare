#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "EIGS_CameraOutlineState.h"
#include "IGS_SubControllerMountableInterface.h"
#include "IGS_Crane.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAkComponent;
class UArrowComponent;
class UBoxComponent;
class UIGS_CraneObjectComponent;
class UIGS_InteractiveComponent;
class UInstancedStaticMeshComponent;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_Crane : public APawn, public IIGS_SubControllerMountableInterface {
    GENERATED_BODY()
public:
    AIGS_Crane(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseCrane(AIGS_GameCharacterFramework* inInstigator);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToogleMagnetState();

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMagnetState(bool inState);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RotateCrane(float inAxisValue);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MoveMagnet(float inAxisValue);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LiftMagnet(float inAxisValue);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ExitCraneControl();

    UFUNCTION()
    void OnRep_MagnetHeadLocationChanged() const;

    UFUNCTION()
    void OnRep_MagnetComponentLocationChanged() const;

    UFUNCTION()
    void OnRep_CraneTopModuleRotationChanged() const;

    UFUNCTION()
    void OnRep_CableInstancesCountChanged() const;

    UFUNCTION(BlueprintImplementableEvent)
    void OnMagnetStateChanged(bool inState);

    UFUNCTION()
    void OnMagnetBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);

    UFUNCTION()
    void OnCraneObjectsDetectorEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);

    UFUNCTION()
    void OnCraneObjectsDetectorBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);

    UFUNCTION(BlueprintImplementableEvent)
    void OnCraneObjectReleaseStateChanged(bool inState);

    UFUNCTION(BlueprintImplementableEvent)
    void OnCraneObjectReleased(UIGS_CraneObjectComponent* CraneObjectComponent);

    UFUNCTION(BlueprintImplementableEvent)
    void OnCraneObjectPicked(UIGS_CraneObjectComponent* CraneObjectComponent);

    UFUNCTION(BlueprintImplementableEvent)
    void InitComponents();

    UFUNCTION(Client, Reliable)
    void Client_SetObjectOutlineState(AActor* inOutlineObject, EIGS_CameraOutlineState inState);

    UFUNCTION(Client, Reliable)
    void Client_OnCraneObjectPickStatusChanged(UIGS_CraneObjectComponent* inCraneObject, bool inState);

    UFUNCTION(Client, Reliable)
    void Client_OnCraneObjectDetectionStatusChanged(UIGS_CraneObjectComponent* inCraneObject, bool inState);

    UFUNCTION(Client, Reliable)
    void Client_ExitCraneControl();

    UFUNCTION(Client, Reliable)
    void Client_EnterCraneControl();

    UFUNCTION(NetMulticast, Unreliable)
    void All_RotateCraneStop();

    UFUNCTION(NetMulticast, Unreliable)
    void All_RotateCraneStart();

    UFUNCTION(NetMulticast, Unreliable)
    void All_OnMagnetStateChanged(bool inState);

    UFUNCTION(NetMulticast, Unreliable)
    void All_MoveMagnetStop();

    UFUNCTION(NetMulticast, Unreliable)
    void All_MoveMagnetStart();

    UFUNCTION(NetMulticast, Unreliable)
    void All_LiftMagnetStop();

    UFUNCTION(NetMulticast, Unreliable)
    void All_LiftMagnetStart();

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* RootObject;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* InteractiveComponent;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UPrimitiveComponent* CraneTopModule;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* MagnetComponent;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UArrowComponent* MagnetComponentMinMovePoint;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UArrowComponent* MagnetComponentMaxMovePoint;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UPrimitiveComponent* MagnetHead;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UBoxComponent* MagnetHeadSweepComponent;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* MagnetHeadPinPoint;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UArrowComponent* MagnetHeadTopPosition;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInstancedStaticMeshComponent* CableInstancedMesh;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UBoxComponent* MagnetBox;

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USphereComponent* DetectionSphere;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkComponent* AkAudioComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* RotateStartAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* RotateStopAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MagnetToggleOnAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MagnetToggleOffAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MagnetLiftStartAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MagnetLiftStopAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MagnetMoveStartAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* MagnetMoveStopAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* EngineStartAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* EngineStopAkEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> CraneIgnoreList;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableMeshHeight;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MoveSpeed;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LiftSpeed;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RotationSpeed;

    UPROPERTY(ReplicatedUsing=OnRep_CraneTopModuleRotationChanged)
    FRotator mR_CraneTopModuleRotator;

    UPROPERTY(ReplicatedUsing=OnRep_MagnetComponentLocationChanged)
    FVector mR_MagnetComponentLocation;

    UPROPERTY(ReplicatedUsing=OnRep_MagnetHeadLocationChanged)
    FVector mR_MagnetHeadLocation;

    UPROPERTY(ReplicatedUsing=OnRep_CableInstancesCountChanged)
    int32 mR_CableInstancesCount;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};
