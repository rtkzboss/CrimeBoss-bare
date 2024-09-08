#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_LadderInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LadderInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLadderTopEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRope;
    
    UIGS_LadderInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_Use(AIGS_GameCharacterFramework* inInstigator, bool inIsUnarmed);
    
};

