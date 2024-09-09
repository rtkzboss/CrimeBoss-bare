#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_SquadDistanceFromFriendlyCharacters.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_SquadDistanceFromFriendlyCharacters : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_SquadDistanceFromFriendlyCharacters();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> FriendlyActorsContext;
    
};

