#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventPointReachedSignatureDelegate.h"
#include "EventPointDelegateHolder.generated.h"

UCLASS()
class PATHFOLLOW_API UEventPointDelegateHolder : public UObject {
    GENERATED_BODY()
public:
    UEventPointDelegateHolder();

    UPROPERTY(BlueprintAssignable)
    FEventPointReachedSignature OnEventPointReached;
    
};

