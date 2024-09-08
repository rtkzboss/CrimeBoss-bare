#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_AICaptainSpecData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICaptainSpecData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_UnitSpecialization Specialization;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_GameCharacterFramework> VIP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Chance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NormalizedChance;
    
    FIGS_AICaptainSpecData();
};

