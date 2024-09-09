#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_SquadDistanceFromFriendlyCharactersOutsideSquad.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_SquadDistanceFromFriendlyCharactersOutsideSquad : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_SquadDistanceFromFriendlyCharactersOutsideSquad();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> FriendlyActorsContext;
    
};

