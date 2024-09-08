#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_AkSwitchVolumeComponent.generated.h"

class AActor;
class UAkSwitchValue;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_AkSwitchVolumeComponent : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* FootstepAkSwitch;
    
    UPROPERTY()
    UAkSwitchValue* FootstepNoneAkSwitch;
    
public:
    UIGS_AkSwitchVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void NotifyActorEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION()
    void NotifyActorBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
};

