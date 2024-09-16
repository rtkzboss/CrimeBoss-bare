#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_Event.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_EventRow.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_EventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_Event EventType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BuildConfigurationTileable EventSubLevel;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ScriptActorTag;

    FIGS_EventRow();
};
