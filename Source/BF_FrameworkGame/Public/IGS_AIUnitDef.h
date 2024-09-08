#pragma once
#include "CoreMinimal.h"
#include "EIGS_AITiers.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_AIUnitDBSource.h"
#include "IGS_AILoadout.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "IGS_AIUnitBaseDataDefaults.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIUnitDef.generated.h"

class AIGS_AIControllerFramework;
class AIGS_GameCharacterFramework;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIUnitDef {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftClassPtr<AIGS_AIControllerFramework> Controller;
    
    UPROPERTY()
    TSoftClassPtr<AIGS_GameCharacterFramework> Pawn;
    
    UPROPERTY()
    FIGS_AILoadout Loadout;
    
    UPROPERTY()
    TArray<FIGS_AIThrowableWeaponDef> ThrowablePool;
    
    UPROPERTY()
    FIGS_AIUnitBaseDataDefaults Stats;
    
    UPROPERTY()
    TSubclassOf<UGameplayEffect> StatsMultiplierGE;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_AITiers Tier;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 Variation;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_UnitSpecialization Specialization;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsMeleeOnly;
    
    UPROPERTY()
    EIGS_AIUnitDBSource Source;
    
    FIGS_AIUnitDef();
};

