#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_IsRetreatingOutside.generated.h"

UCLASS()
class BF_AI_API UIGS_EnvQueryTest_IsRetreatingOutside : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UIGS_EnvQueryTest_IsRetreatingOutside();

    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UEnvQueryContext>> Contexts;

};
