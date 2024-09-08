#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "IGS_BTDecorator_BotPerformStealthTakedown.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_BotPerformStealthTakedown : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharacterToShoutKey;
    
public:
    UIGS_BTDecorator_BotPerformStealthTakedown();

};

