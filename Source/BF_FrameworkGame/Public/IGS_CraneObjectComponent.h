#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CameraOutlineState.h"
#include "IGS_CraneObjectComponent.generated.h"

class UPrimitiveComponent;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CraneObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* MagnetPinPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* PlacePinPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* SweepComponent;
    
public:
    UIGS_CraneObjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOutlineState(EIGS_CameraOutlineState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentsForOutline(const TArray<UPrimitiveComponent*>& inComponents);
    
};

