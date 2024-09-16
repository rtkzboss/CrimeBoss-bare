#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "IGS_EQG_PanicPoints.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EQG_PanicPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UIGS_EQG_PanicPoints();

private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

};
