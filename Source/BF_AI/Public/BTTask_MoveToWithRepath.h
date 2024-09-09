#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_MoveToBase.h"
#include "BTTask_MoveToWithRepath.generated.h"

UCLASS()
class BF_AI_API UBTTask_MoveToWithRepath : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
    UBTTask_MoveToWithRepath();

protected:
    UPROPERTY(EditAnywhere)
    float RefreshTimeMin;
    
    UPROPERTY(EditAnywhere)
    float RefreshTimeMax;
    
};

