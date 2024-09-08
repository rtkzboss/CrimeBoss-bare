#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "IGS_EQG_PanicPoints.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EQG_PanicPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;
    
public:
    UIGS_EQG_PanicPoints();

};

