#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_CiviliansVariationType.h"
#include "EIGS_CopsVariationType.h"
#include "EIGS_EmployeesVariationType.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_SecurityVariationType.h"
#include "IGS_AIBackupSpecializationHolder.h"
#include "IGS_AIBaseUnitDef.h"
#include "IGS_AICivilianDefaultTierDef.h"
#include "IGS_AICopDefaultTierDef.h"
#include "IGS_AIEmployeeDefaultTierDef.h"
#include "IGS_AIGangsterSpecializationHolder.h"
#include "IGS_AIGuardDefaultTierDef.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AISwatSpecializationHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDatabaseStory.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AIDatabaseFPS;
class UIGS_SettingsID;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AIDatabaseStory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_GangsterVariationType, FIGS_AIGangsterSpecializationHolder> GangsterVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_HeistersBackupVariationType, FIGS_AIBackupSpecializationHolder> BackupVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_SWATVariationType, FIGS_AISwatSpecializationHolder> SWATVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CopsVariationType, FIGS_AICopDefaultTierDef> CopVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_SecurityVariationType, FIGS_AIGuardDefaultTierDef> GuardVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_EmployeesVariationType, FIGS_AIEmployeeDefaultTierDef> EmployeeVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CiviliansVariationType, FIGS_AICivilianDefaultTierDef> CivilianVariations;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UIGS_SettingsID>, FIGS_AILoadoutHolder> LoadoutOverrides;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftClassPtr<AIGS_GameCharacterFramework>, FIGS_AIBaseUnitDef> VIPs;
    
    UPROPERTY(EditDefaultsOnly)
    FString Password;
    
    UPROPERTY()
    bool bCanEdit;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AIDatabaseFPS* FPSDatabase;
    
    UIGS_AIDatabaseStory();

};

