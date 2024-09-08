#pragma once
#include "CoreMinimal.h"
#include "EPFEventFireMode.h"
#include "EventPoint.generated.h"

USTRUCT(BlueprintType)
struct FEventPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* UserData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPFEventFireMode FireMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FireCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    PATHFOLLOW_API FEventPoint();
};

