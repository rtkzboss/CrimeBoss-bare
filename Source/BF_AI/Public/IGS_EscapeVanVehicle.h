#pragma once
#include "CoreMinimal.h"
#include "EscapeVanDoorStatusChangedDelegate.h"
#include "IGS_EscapeVehicle.h"
#include "IGS_EscapeVanVehicle.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAnimMontage;
class UIGS_InteractiveComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Config=Inherit)
class BF_AI_API AIGS_EscapeVanVehicle : public AIGS_EscapeVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEscapeVanDoorStatusChanged OnDoorStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> RearDoorsOpeningAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* MiddleDoorOpeningAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PassengerDoorOpeningAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* MiddleRightDoorInteractive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* RearRightDoorInteractive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* RearLeftDoorInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* RearLeftDoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* RearRightDoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* MiddleDoorMesh;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsRearDoorsOpened)
    bool mR_bIsRearDoorsOpened;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsMiddleDoorOpened)
    bool mR_bIsMiddleDoorOpened;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsPassDoorOpened)
    bool mR_bIsPassDoorOpened;
    
    UPROPERTY(EditAnywhere)
    bool mR_bDisableAutoDoors;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* RearDoorOpenAudio;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* RearDoorCloseAudio;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* SlidingDoorOpenAudio;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* SlidingDoorCloseAudio;
    
public:
    AIGS_EscapeVanVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_IsRearDoorsOpened();
    
    UFUNCTION()
    void OnRep_IsPassDoorOpened();
    
    UFUNCTION()
    void OnRep_IsMiddleDoorOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRearDoorInteraction(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerDoorInteraction(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnMiddleDoorInteraction(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnRearDoorInteraction(bool inIsOpened);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnPassengerDoorInteraction(bool inIsOpened);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnMiddleDoorInteraction(bool inIsOpened);
    
    UFUNCTION(BlueprintCallable)
    void CloseDoors();
    
};

