#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EIGS_HubRotation.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBLevelWithTag.h"
#include "IGS_HUBBackdropsRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBBackdropsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsActive;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_HubRotation RotationType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_HubBackdropTypes BackdropType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_HubDistrict DistrictType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BuildConfigurationTileable DA_Art;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_HUBLevelWithTag> Scenarios;

    BF_LEVELGENERATOR_API FIGS_HUBBackdropsRow();
};
