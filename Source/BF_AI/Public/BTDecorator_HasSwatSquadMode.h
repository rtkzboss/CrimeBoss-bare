#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_SquadSwatMode.h"
#include "BTDecorator_HasSwatSquadMode.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_HasSwatSquadMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SquadSwatMode SwatMode;
    
public:
    UBTDecorator_HasSwatSquadMode();

};

