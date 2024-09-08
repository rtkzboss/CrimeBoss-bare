#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_AISpawnGroupSideRough.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_EnvQueryTest_AISpawnGroupSideRough : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> SideOf;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue SidesBitflag;
    
    UIGS_EnvQueryTest_AISpawnGroupSideRough();

};

