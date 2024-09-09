#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_HasHealthState.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_HasHealthState : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UBTDecorator_HasHealthState();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HealthState DesiredHealthState;
    
};

