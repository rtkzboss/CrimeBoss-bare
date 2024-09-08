#pragma once
#include "CoreMinimal.h"
#include "IGS_SnipePointData.generated.h"

class AIGS_SnipePoint;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_SnipePointData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AIGS_SnipePoint* SnipePoint;
    
    UPROPERTY(EditAnywhere)
    float AimAtSpeed;
    
    UPROPERTY(EditAnywhere)
    float WaitTime;
    
    FIGS_SnipePointData();
};

