#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_BleedType.h"
#include "BTDecorator_HasBleedingType.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_HasBleedingType : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasBleedingType();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_BleedType DesiredBleedType;

};
