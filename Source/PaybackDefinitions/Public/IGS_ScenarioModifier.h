#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ScenarioModifier.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_ScenarioModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer Scenarios;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Modifier;

    FIGS_ScenarioModifier();
};
