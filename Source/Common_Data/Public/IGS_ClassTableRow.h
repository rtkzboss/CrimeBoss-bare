#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ClassData.h"
#include "IGS_GameplayEffect_Class.h"
#include "Templates/SubclassOf.h"
#include "IGS_ClassTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GameplayEffect_Class> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ClassData Data;

    FIGS_ClassTableRow();
};
