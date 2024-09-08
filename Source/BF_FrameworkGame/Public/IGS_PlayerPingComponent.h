#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "EIGS_PingableType.h"
#include "IGS_OnPingedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerPingComponent.generated.h"

class AActor;
class AIGS_PingableWidgetActor;
class AIGS_PlayerControllerFramework;
class AIGS_SmartPingableWidgetActor;
class UIGS_PingableComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerPingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PingableWidgetActor> GenericPingWidgetActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_SmartPingableWidgetActor> SmartPingWidgetActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GenericPingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ValidSmartPingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InvalidSmartPingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PingRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PingMaxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmartPingHoldDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmartPingMagnetismDegrees;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPinged OnPingedEvent;
    
protected:
    UPROPERTY()
    AIGS_PlayerControllerFramework* m_CharacterController;
    
private:
    UPROPERTY()
    TMap<AActor*, TWeakObjectPtr<AIGS_SmartPingableWidgetActor>> m_UsedSmartPingWidgets;
    
public:
    UIGS_PlayerPingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server)
    void Server_Ping(EIGS_PingableType inType, FVector_NetQuantize InLocation, UIGS_PingableComponent* InComponent, AActor* inActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Ping(UIGS_PingableComponent* InComponent, EIGS_PingableType inType, FVector_NetQuantize InLocation);
    
};

