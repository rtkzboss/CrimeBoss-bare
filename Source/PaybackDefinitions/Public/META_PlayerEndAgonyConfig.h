#pragma once
#include "CoreMinimal.h"
#include "META_PlayerEndAgonyConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_PlayerEndAgonyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CountOfMissionMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DayFromWhichAgonyCanBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Territoriescoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CountDaysInEnemyList;
    
    FMETA_PlayerEndAgonyConfig();
};

