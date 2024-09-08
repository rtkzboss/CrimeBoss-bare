#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EIGS_CharacterState.h"
#include "BTService_OverrideStateWhenRelevant.generated.h"

UCLASS()
class BF_AI_API UBTService_OverrideStateWhenRelevant : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EIGS_CharacterState ForcedCharacterState;
    
public:
    UBTService_OverrideStateWhenRelevant();

};

