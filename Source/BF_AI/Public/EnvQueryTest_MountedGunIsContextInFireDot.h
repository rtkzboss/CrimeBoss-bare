#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_MountedGunIsContextInFireDot.generated.h"

class UEnvQueryContext;

UCLASS()
class BF_AI_API UEnvQueryTest_MountedGunIsContextInFireDot : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationBoundsMutlipier;
    
    UEnvQueryTest_MountedGunIsContextInFireDot();

};

