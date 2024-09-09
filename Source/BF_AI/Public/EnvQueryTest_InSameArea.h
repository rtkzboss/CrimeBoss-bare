#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_InSameArea.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_InSameArea : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_InSameArea();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DesiredRoomPoint;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue Depth;
    
};

