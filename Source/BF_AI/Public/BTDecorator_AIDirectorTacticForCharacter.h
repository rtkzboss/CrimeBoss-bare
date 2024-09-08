#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_StormTacticType.h"
#include "BTDecorator_AIDirectorTacticForCharacter.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UBTDecorator_AIDirectorTacticForCharacter : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_StormTacticType DesiredTactic;
    
public:
    UBTDecorator_AIDirectorTacticForCharacter();

};

