#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CharacterState.h"
#include "BTDecorator_IsCharacterState.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_IsCharacterState : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsCharacterState();

    UPROPERTY(EditAnywhere)
    bool bIsCharacterBlackboardBased;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharacterBlackboardKey;

protected:
    UPROPERTY(EditAnywhere)
    EIGS_CharacterState DesiredCharacterState;

};
