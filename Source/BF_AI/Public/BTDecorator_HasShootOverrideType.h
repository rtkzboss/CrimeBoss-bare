#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_ShootingOverrideType.h"
#include "BTDecorator_HasShootOverrideType.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasShootOverrideType : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasShootOverrideType();

protected:
    UPROPERTY(EditAnywhere)
    EIGS_ShootingOverrideType ShootingType;
    
};

