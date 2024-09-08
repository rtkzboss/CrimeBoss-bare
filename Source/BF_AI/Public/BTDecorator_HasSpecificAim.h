#pragma once
#include "CoreMinimal.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_HasSpecificAim.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasSpecificAim : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float AimRange;
    
public:
    UBTDecorator_HasSpecificAim();

};

