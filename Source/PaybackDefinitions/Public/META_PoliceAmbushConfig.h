#pragma once
#include "CoreMinimal.h"
#include "META_PoliceAmbushConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_PoliceAmbushConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PoliceAmbush;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionWasDoneInStealth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionEndedWith3PoliceBadges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionEndedWith4PoliceBadges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionEndedWith5PoliceBadges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DetectiveOnTile;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DetectiveActiveAnywhere;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeatVeryLow;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeatLow;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeatMedium;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeatHigh;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeatVeryHigh;

    FMETA_PoliceAmbushConfig();
};
