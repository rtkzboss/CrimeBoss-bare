#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_PerkData.h"
#include "Templates/SubclassOf.h"
#include "IGS_PerksTableRow.generated.h"

class UIGS_GameplayEffect_PerkBase;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_PerksTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GameplayEffect_PerkBase> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_PerkData Data;
    
    FIGS_PerksTableRow();
};

