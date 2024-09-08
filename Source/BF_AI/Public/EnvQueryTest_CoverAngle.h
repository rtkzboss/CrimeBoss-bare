#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_CoverAngle.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_CoverAngle : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    float CombatRangeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float CombatRangeMax;
    
    UEnvQueryTest_CoverAngle();

};

