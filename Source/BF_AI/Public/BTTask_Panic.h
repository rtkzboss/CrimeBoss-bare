#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_ReactToOffenceAmbient.h"
#include "BTTask_Panic.generated.h"

UCLASS()
class BF_AI_API UBTTask_Panic : public UBTTask_ReactToOffenceAmbient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval Duration;
    
public:
    UBTTask_Panic();

};

