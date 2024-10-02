#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateColor.h"
#include "IGS_DebriefAnimationSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DebriefAnimationSequenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadWrite)
    int32 Value;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText BadgeText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor BadgeTextColor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor BadgeColor;

    CRIMEBOSSMETA_API FIGS_DebriefAnimationSequenceData();
};
