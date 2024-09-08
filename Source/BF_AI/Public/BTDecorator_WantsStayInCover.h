#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_WantsStayInCover.generated.h"

class UIGS_CharacterData;
class UIGS_ObjectStatus;
class UObject;

UCLASS()
class BF_AI_API UBTDecorator_WantsStayInCover : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RefreshTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CoverKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BestCoverKey;
    
    UPROPERTY()
    UObject* m_LastCover;
    
    UPROPERTY(Instanced)
    UIGS_CharacterData* CharacterData;
    
    UPROPERTY(Instanced)
    UIGS_ObjectStatus* ObjectStatus;
    
public:
    UBTDecorator_WantsStayInCover();

};

