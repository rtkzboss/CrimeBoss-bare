#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateColor.h"
#include "IGS_RunningBannerDataRow.generated.h"

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_RunningBannerDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Separator;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Headline;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BadgeText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor HeadlineColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor BadgeBackgroundColor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor BadgeTextColor;

    FIGS_RunningBannerDataRow();
};
