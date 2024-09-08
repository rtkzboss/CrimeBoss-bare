#pragma once
#include "CoreMinimal.h"
#include "EMETA_BonusType.h"
#include "META_BossLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BossLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentBossLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxBossPointsToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccumulatedBossPointsToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_BonusType, int32> BonusesLvls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<EMETA_BonusType> PreparedBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 RemainingLvlUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 LastSeenLvlUpScreen;
    
    FMETA_BossLevelSaveData();
};

