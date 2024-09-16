#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_CoverInSameArea.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_CoverInSameArea : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_CoverInSameArea();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DesiredRoomPoint;

    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue Depth;

};
