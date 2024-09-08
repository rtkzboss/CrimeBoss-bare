#pragma once
#include "CoreMinimal.h"
#include "EIGS_EmployeesVariationType.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AIEmployeeBaseDataDefaults.h"
#include "IGS_AIEmployeeTierDef.h"
#include "IGS_AIEmployeeTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIEmployeeTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIGS_EmployeesVariationType, FIGS_AIEmployeeTierDef> Variations;
    
    UPROPERTY(EditAnywhere)
    FIGS_AIEmployeeBaseDataDefaults DefaultStats;
    
    FIGS_AIEmployeeTeamDef();
};

