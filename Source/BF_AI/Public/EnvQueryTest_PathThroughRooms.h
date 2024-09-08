#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_PathThroughRooms.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_PathThroughRooms : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;
    
    UEnvQueryTest_PathThroughRooms();

};

