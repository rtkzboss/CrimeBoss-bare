#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_FollowCircle.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class BF_AI_API UEnvQueryGenerator_FollowCircle : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UEnvQueryGenerator_FollowCircle();

};

