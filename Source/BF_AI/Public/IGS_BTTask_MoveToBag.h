#pragma once
#include "CoreMinimal.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToBag.generated.h"

UCLASS(Config=Inherit)
class BF_AI_API UIGS_BTTask_MoveToBag : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float OptimalDistance;
    
public:
    UIGS_BTTask_MoveToBag();

};

