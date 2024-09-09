#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_ReactToOffenceAmbient.h"
#include "BTTask_AmbientInspect.generated.h"

UCLASS()
class BF_AI_API UBTTask_AmbientInspect : public UBTTask_ReactToOffenceAmbient {
    GENERATED_BODY()
public:
    UBTTask_AmbientInspect();

protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval Duration;
    
};

