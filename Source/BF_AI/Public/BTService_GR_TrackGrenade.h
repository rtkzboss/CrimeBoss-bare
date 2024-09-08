#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GR_TrackGrenade.generated.h"

UCLASS()
class BF_AI_API UBTService_GR_TrackGrenade : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GeneralReactionDataKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GrenadeActorKey;
    
    UPROPERTY(EditAnywhere)
    float SafePeriod;
    
public:
    UBTService_GR_TrackGrenade();

};

