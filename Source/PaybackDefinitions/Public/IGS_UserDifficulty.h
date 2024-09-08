#pragma once
#include "CoreMinimal.h"
#include "EIGS_AITiers.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_Heat.h"
#include "IGS_UserDifficulty.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_UserDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_ScenarioDifficulty ScenarioDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_FPSDifficulty FPSDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_Heat Heat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AITiers PrimaryEnemyTier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AITiers SWATTier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AITiers AllyTier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, float> SpecialTierOverrideChanceForStormIntensity;
    
    FIGS_UserDifficulty();
};

