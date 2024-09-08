#pragma once
#include "CoreMinimal.h"
#include "META_WeakenMissionTurfActionGenData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_WeakenMissionTurfActionGenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WeaknessChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NeutralizeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CaptureChance;
    
    FMETA_WeakenMissionTurfActionGenData();
};

