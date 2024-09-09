#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_ZiplineFinishedDelegate.h"
#include "IGS_ZiplineInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ZiplineInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_ZiplineInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Use(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SlideUp;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FIGS_ZiplineFinished OnZiplineAIFinished;
    
};

