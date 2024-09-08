#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_TutorialTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_TutorialTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    FMETA_TutorialTextTableRow();
};

