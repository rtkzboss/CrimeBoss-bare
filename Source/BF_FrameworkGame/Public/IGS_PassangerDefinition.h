#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_UnitSpecialization.h"
#include "Templates/SubclassOf.h"
#include "IGS_PassangerDefinition.generated.h"

class UIGS_SettingsID;

USTRUCT(BlueprintType)
struct FIGS_PassangerDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SeatSocket;
    
    UPROPERTY(EditAnywhere)
    EIGS_CarSeatVariant SeatVariant;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval GetOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    BF_FRAMEWORKGAME_API FIGS_PassangerDefinition();
};

