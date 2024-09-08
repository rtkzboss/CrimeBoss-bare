#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_TileEnviroment.h"
#include "Templates/SubclassOf.h"
#include "IGS_SingleChainMission.generated.h"

class UIGS_BaseMissionObject;
class UIGS_SingleChainMissionID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_SingleChainMission : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_SingleChainMissionID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_BaseMissionObject> FPSMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_LightingScenarioType LightingScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubBackdropTypes BackdropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TileEnviroment TileEnviroment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType PrimaryEnemyVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GangsterVariationType SecondaryEnemyVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SWATVariationType SWATVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HeistersBackupVariationType AllyVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> Parameters;
    
    FIGS_SingleChainMission();
};

