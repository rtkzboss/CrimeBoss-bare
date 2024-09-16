#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_HasLosThroughCharacters.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_HasLosThroughCharacters : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_HasLosThroughCharacters();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> LosTargetContext;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> OtherCharactersContext;

};
