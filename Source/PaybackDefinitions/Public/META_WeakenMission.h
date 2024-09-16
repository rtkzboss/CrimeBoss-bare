#pragma once
#include "CoreMinimal.h"
#include "META_WeakenMission.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_WeakenMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ThresholdPriority;

    FMETA_WeakenMission();
};
