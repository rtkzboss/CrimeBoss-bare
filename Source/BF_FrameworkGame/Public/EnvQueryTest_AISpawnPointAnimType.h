#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_AISpawnPointAnimType.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API UEnvQueryTest_AISpawnPointAnimType : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_AISpawnPointAnimType();

private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue AnimType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue CheckAnimType;
    
};

