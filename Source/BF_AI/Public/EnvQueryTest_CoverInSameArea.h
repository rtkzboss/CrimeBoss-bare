#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_CoverInSameArea.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_CoverInSameArea : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DesiredRoomPoint;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue Depth;
    
    UEnvQueryTest_CoverInSameArea();

};

