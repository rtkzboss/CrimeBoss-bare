#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_AISpawnGroupSide.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_FRAMEWORKGAME_API UEnvQueryTest_AISpawnGroupSide : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_AISpawnGroupSide();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> SideOf;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue SidesBitflag;
    
};

