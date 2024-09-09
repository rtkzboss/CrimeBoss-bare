#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_VentShaftInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_VentShaftInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_VentShaftInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Use(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHighVentShaft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnd;
    
};

