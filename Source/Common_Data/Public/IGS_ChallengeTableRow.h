#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_ChallengeTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChallengeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredValue;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer RequiredCompletedChallenges;

    FIGS_ChallengeTableRow();
};
