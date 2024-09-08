#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SuspicionDataBase.h"
#include "IGS_PlayerOffenceTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerOffenceTableRow : public FIGS_SuspicionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery OffenceQuery;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectionSpeedMult;
    
    FIGS_PlayerOffenceTableRow();
};

