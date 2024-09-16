#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_InSameRoom.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_InSameRoom : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_InSameRoom();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DesiredRoomPoint;

};
