#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryGenerator_PatrolPoints.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_PatrolPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UIGS_EnvQueryGenerator_PatrolPoints();

private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterLocked;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterLast;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterByTags;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Max3DDistance;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxHeightDiff;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterDistance;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FilterHeight;

};
