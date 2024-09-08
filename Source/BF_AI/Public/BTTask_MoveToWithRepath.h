#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_MoveToBase.h"
#include "BTTask_MoveToWithRepath.generated.h"

UCLASS(Config=Inherit)
class BF_AI_API UBTTask_MoveToWithRepath : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RefreshTimeMin;
    
    UPROPERTY(EditAnywhere)
    float RefreshTimeMax;
    
public:
    UBTTask_MoveToWithRepath();

};

