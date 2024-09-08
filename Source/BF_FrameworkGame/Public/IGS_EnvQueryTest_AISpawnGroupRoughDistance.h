#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_AISpawnGroupRoughDistance.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_EnvQueryTest_AISpawnGroupRoughDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UIGS_EnvQueryTest_AISpawnGroupRoughDistance();

};

