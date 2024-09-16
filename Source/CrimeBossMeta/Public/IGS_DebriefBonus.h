#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_DebriefBonus.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DebriefBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BonusValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText BonusName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText BonusTextFormat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMoney;

    CRIMEBOSSMETA_API FIGS_DebriefBonus();
};
