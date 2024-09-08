#pragma once
#include "CoreMinimal.h"
#include "MissionStats.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMissionStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Accuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RevivesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollectedMoney;
    
    FMissionStats();
};

