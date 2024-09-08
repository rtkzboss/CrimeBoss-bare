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
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> FriendlyActorsContext;
    
    UEnvQueryTest_SquadDistanceFromFriendlyCharacters();

};

