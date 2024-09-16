#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_DotFromTargets.generated.h"

UCLASS()
class BF_AI_API UIGS_EnvQueryTest_DotFromTargets : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UIGS_EnvQueryTest_DotFromTargets();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Characters;

};
