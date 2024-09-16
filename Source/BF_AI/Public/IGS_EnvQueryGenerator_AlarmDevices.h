#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_AlarmDeviceType.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryGenerator_AlarmDevices.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_AlarmDevices : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UIGS_EnvQueryGenerator_AlarmDevices();

private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Querier;

    UPROPERTY(EditDefaultsOnly)
    TSet<EIGS_AlarmDeviceType> PreferredAlarmDeviceTypes;

};
