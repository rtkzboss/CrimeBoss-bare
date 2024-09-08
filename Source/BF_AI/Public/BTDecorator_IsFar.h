#pragma once
#include "CoreMinimal.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_IsFar.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsFar : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Addon;
    
public:
    UBTDecorator_IsFar();

};

