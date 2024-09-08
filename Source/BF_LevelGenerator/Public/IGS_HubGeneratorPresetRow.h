#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubScenarioType.h"
#include "IGS_HubGeneratorPresetRow.generated.h"

class UIGS_PresetData;

USTRUCT(BlueprintType)
struct FIGS_HubGeneratorPresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubScenarioType ScenarioType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ScenarioTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubBackdropTypes BackdropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CompatibleEnvironmentTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_PresetData* PresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WaveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BackdropDirection;
    
    BF_LEVELGENERATOR_API FIGS_HubGeneratorPresetRow();
};

