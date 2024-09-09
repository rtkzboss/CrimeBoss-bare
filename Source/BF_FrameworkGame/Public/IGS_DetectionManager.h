#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DetectionManager.generated.h"

class AActor;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_DetectionManager : public UObject {
    GENERATED_BODY()
public:
    UIGS_DetectionManager();

protected:
    UPROPERTY()
    TArray<AActor*> Detectors;
    
};

