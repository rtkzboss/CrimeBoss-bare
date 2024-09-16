#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_RopeEventsSignature.h"
#include "IGS_RappelInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RappelInteractiveComponent : public UIGS_AnimatedInteractiveComponentSimple {
    GENERATED_BODY()
public:
    UIGS_RappelInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Use(AIGS_GameCharacterFramework* inInstigator);

    UPROPERTY(BlueprintAssignable)
    FIGS_RopeEventsSignature OnRopeDisabledSignature;

};
