#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_ReactionAnimData.h"
#include "IGS_ReactionAnimsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReactionAnimsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_ReactionAnimData> AnimVariations;
    
    BF_ANIMATIONS_API FIGS_ReactionAnimsTableRow();
};

