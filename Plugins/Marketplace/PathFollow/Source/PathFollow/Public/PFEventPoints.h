#pragma once
#include "CoreMinimal.h"
#include "EventPoint.h"
#include "PFEventPoints.generated.h"

class UEventPointDelegateHolder;

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFEventPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEventPoint> Points;

private:
    UPROPERTY()
    UEventPointDelegateHolder* AllEventHolder;

    UPROPERTY()
    TArray<UEventPointDelegateHolder*> Holders;

public:
    FPFEventPoints();
};
