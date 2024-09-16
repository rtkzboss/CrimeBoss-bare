#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_AISpawnGroupRoughDistance.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_EnvQueryTest_AISpawnGroupRoughDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UIGS_EnvQueryTest_AISpawnGroupRoughDistance();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DistanceTo;

};
