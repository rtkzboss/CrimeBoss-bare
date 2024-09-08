#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_VentShaft.generated.h"

class AIGS_GameCharacterFramework;
class UBoxComponent;
class UIGS_ChildActorComponentWithNotify;
class UIGS_VentShaftInteractiveComponent;
class UPrimitiveComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_VentShaft : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector EndLocation;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_VentShaftInteractiveComponent* VentShaftEnterInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_VentShaftInteractiveComponent* VentShaftExitInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* BoxBlocker;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* BoxTrigger;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ChildActorComponentWithNotify* ChildActorComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsOpened)
    bool IsOpened;
    
public:
    AIGS_VentShaft(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION()
    void OnTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION()
    void OnRep_IsOpened() const;
    
    UFUNCTION()
    void OnCoverUsed(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION()
    void OnBlockerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
};

