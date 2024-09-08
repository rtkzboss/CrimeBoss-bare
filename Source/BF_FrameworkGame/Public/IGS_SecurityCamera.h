#pragma once
#include "CoreMinimal.h"
#include "IGS_DetectorBase.h"
#include "IGS_SecurityCamera.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_SecurityCamera : public AIGS_DetectorBase {
    GENERATED_BODY()
public:
    AIGS_SecurityCamera(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWireCut(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_CosmeticWireCut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CosmeticWireCut();
    
};

