#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_SpecialObjectiveAnimData.h"
#include "IGS_SpecialObjectiveAnimsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SpecialObjectiveAnimsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_SpecialObjectiveAnimData> AnimVariations;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_SpecialObjectiveAnimData> FemaleAnimVariations;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_SpecialObjectiveAnimData> FemaleWithHeelsAnimVariations;
    
    UPROPERTY(EditAnywhere)
    bool Looped;
    
    BF_ANIMATIONS_API FIGS_SpecialObjectiveAnimsTableRow();
};

