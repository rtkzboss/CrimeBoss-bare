#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "Templates/SubclassOf.h"
#include "IGS_NoSpawnPointSpawnDefinition.generated.h"

class UIGS_SettingsID;

USTRUCT(BlueprintType)
struct FIGS_NoSpawnPointSpawnDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 UnitVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSideOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    BF_FRAMEWORKGAME_API FIGS_NoSpawnPointSpawnDefinition();
};

