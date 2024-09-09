#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "BBTDecorator_IsAIType.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBBTDecorator_IsAIType : public UBTDecorator {
    GENERATED_BODY()
public:
    UBBTDecorator_IsAIType();

    UPROPERTY(EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;
    
};

