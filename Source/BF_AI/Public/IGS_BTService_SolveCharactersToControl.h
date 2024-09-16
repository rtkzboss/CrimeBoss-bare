#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SolveCharactersToControl.generated.h"

class UEnvQuery;

UCLASS()
class BF_AI_API UIGS_BTService_SolveCharactersToControl : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_SolveCharactersToControl();

protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* ShoutAtQueryTemplate;

    UPROPERTY(EditAnywhere)
    UEnvQuery* ZiptieQueryTemplate;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharacterToZiptieKey;

    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CharacterToShoutAt;

    UPROPERTY(EditAnywhere)
    float RefreshDelay;

};
