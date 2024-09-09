#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_Subdue.generated.h"

class AIGS_PlayerCharacter;

UCLASS()
class BF_AI_API UIGS_BTTask_Subdue : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_Subdue();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharToSubdueKey;
    
    UPROPERTY()
    TWeakObjectPtr<AIGS_PlayerCharacter> Character;
    
};

