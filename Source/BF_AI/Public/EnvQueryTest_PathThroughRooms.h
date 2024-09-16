#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_PathThroughRooms.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_PathThroughRooms : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_PathThroughRooms();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

};
