#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SuspicionDataBase.h"
#include "IGS_SuspActorsOffenceTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SuspActorsOffenceTableRow : public FIGS_SuspicionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery OffenceQuery;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetectionSpeedMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AmbientReactionValidOnlyInRestrictedArea;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RotateToOffenceOwnerPos;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EventInitialDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EventLifetime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EventNoticedLifetime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EternalEvent;

    FIGS_SuspActorsOffenceTableRow();
};
