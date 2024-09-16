#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_EventMission.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_EventMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Chance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle Event;

    FIGS_EventMission();
};
