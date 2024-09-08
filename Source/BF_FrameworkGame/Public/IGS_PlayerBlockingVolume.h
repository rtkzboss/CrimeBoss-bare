#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "IGS_PlayerBlockingVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PlayerBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    uint8 bPushOut: 1;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bPushOutForceAddUpImpulse: 1;
    
public:
    AIGS_PlayerBlockingVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
};

