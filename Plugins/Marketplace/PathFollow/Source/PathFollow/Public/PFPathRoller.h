#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFPathRoller.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFPathRoller {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInterpCurveVector _rollAnglesCurve;
    
private:
    UPROPERTY()
    TArray<UObject*> _curves;
    
public:
    FPFPathRoller();
};

