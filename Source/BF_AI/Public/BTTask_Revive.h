#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_MoveToBase.h"
#include "BTTask_Revive.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UBTTask_Revive : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
    UBTTask_Revive();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharToReviveKey;
    
    UPROPERTY(EditAnywhere)
    float DistanceToMove;
    
    UPROPERTY(EditAnywhere)
    float DistanceToStop;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* Character;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* CharacterToRevive;
    
};

