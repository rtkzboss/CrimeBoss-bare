#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SuspicionDataBase.h"
#include "IGS_SpecialOffenceTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SpecialOffenceTableRow : public FIGS_SuspicionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery OffenceQuery;
    
    FIGS_SpecialOffenceTableRow();
};

