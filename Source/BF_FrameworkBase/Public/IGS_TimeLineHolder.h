#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TimeLineHolder.generated.h"

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_TimeLineHolder : public UObject {
    GENERATED_BODY()
public:
    UIGS_TimeLineHolder();

    UFUNCTION()
    void OnFinished();

};
