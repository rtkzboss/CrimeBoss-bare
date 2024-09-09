#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_CoverCanShoot.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_CoverCanShoot : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_CoverCanShoot();

private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue UseStandingPose;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue UseLeftSideStep;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue UseRightSideStep;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue UseSideStepOnly;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDrawDebugLines;
    
};

