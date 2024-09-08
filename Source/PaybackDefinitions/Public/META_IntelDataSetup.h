#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_IntelDataSetup.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_IntelDataSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval SoldiersRangeFor100PercentIntel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UnlocksPossibilityToPlayMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageToRevealDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageToIncreaseMaxMonetaryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageToDifficultyReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PercentageToLowerDifficultyTwice;
    
    FMETA_IntelDataSetup();
};

