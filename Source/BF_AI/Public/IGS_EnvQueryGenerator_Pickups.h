#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_PickupType.h"
#include "IGS_EnvQueryGenerator_Pickups.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_Pickups : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UIGS_EnvQueryGenerator_Pickups();

    UPROPERTY(EditAnywhere)
    EIGS_PickupType PickupType;
    
};

