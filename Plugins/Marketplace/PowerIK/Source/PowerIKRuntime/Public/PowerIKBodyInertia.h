#pragma once
#include "CoreMinimal.h"
#include "PowerIKBodyInertia.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKBodyInertia {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ApplyInertiaToBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothFactor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool UseSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpringStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpringDamping;
    
    FPowerIKBodyInertia();
};

