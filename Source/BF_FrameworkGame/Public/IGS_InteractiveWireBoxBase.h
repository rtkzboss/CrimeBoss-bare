#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_InteractiveWireBoxBase.generated.h"

class UStaticMeshComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_InteractiveWireBoxBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UStaticMeshComponent*> WireInteractiveMeshes;
    
public:
    AIGS_InteractiveWireBoxBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWireCut(int32 inWireIndex);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSuccess();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFail();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitProperties();
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_RemoveWire(int32 inWireIndex);
    
};

