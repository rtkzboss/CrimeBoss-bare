#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubScenarioType.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBScenarioData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBScenarioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_HubScenarioType ScenarioType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BuildConfigurationTileable ScenarioDA;

    BF_LEVELGENERATOR_API FIGS_HUBScenarioData();
};
