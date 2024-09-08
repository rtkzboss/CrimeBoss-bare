#pragma once
#include "CoreMinimal.h"
#include "META_GangSpawnWeakenMission.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangSpawnWeakenMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ThresholdPriority;
    
    FMETA_GangSpawnWeakenMission();
};

