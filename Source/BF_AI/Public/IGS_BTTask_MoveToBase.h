#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"
#include "IGS_BTTask_MoveToAsync.h"
#include "IGS_BTTask_MoveToBase.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_MoveToBase : public UIGS_BTTask_MoveToAsync {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LookPosKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AcceptableRadiusKey;
    
    UPROPERTY(EditAnywhere)
    bool CanSprint;
    
    UPROPERTY(EditAnywhere)
    bool CanEndInDanger;
    
    UPROPERTY(EditAnywhere)
    EIGS_CharacterVsHeistersCollisionStatus m_MovingCharacterVsHeistersCollisionStatus;
    
public:
    UIGS_BTTask_MoveToBase();

};

