#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_RopeEventsSignatureDelegate.h"
#include "IGS_RappelInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RappelInteractiveComponent : public UIGS_AnimatedInteractiveComponentSimple {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FIGS_RopeEventsSignature OnRopeDisabledSignature;
    
public:
    UIGS_RappelInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Use(AIGS_GameCharacterFramework* inInstigator);
    
};

