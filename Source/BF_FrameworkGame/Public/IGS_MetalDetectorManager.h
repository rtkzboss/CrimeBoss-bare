#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_MetalDetectorManager.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_MetalDetectorManager : public AActor {
    GENERATED_BODY()
public:
    AIGS_MetalDetectorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDetectorsEnabled(bool inState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetected();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetMetalDetectorsState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeleteObstacle() const;
    
};

