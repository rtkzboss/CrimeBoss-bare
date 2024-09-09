#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_FireBase.h"
#include "IGS_BTTask_FireInFrontOfMove.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_FireInFrontOfMove : public UIGS_BTTask_FireBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_FireInFrontOfMove();

private:
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    float FireTime;
    
};

