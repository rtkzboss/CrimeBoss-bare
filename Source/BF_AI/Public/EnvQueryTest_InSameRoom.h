#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_InSameRoom.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_InSameRoom : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DesiredRoomPoint;
    
    UEnvQueryTest_InSameRoom();

};

