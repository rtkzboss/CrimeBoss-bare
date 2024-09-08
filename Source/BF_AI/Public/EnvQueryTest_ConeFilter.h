#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ConeFilter.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_ConeFilter : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerConeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerConeScore;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue PeripheralConeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue PeripheralConeScore;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OutsideConeScore;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue Is2DOnly;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDrawDebugLines;
    
public:
    UEnvQueryTest_ConeFilter();

};

