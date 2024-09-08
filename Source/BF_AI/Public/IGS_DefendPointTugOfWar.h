#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_DefendPointBase.h"
#include "IGS_DefendPointTugOfWar.generated.h"

class AIGS_WaypointBase;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_DefendPointTugOfWar : public AIGS_DefendPointBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AIGS_WaypointBase* AdvancePoint;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AIGS_WaypointBase* RetreatPoint;
    
    AIGS_DefendPointTugOfWar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Retreat(EIGS_TeamSideEnum inTeamSideToAdvance, int32 inScope, EIGS_Speed inSpeed, bool inCrouch);
    
    UFUNCTION(BlueprintCallable)
    void Advance(EIGS_TeamSideEnum inTeamSideToAdvance, int32 inScope, EIGS_Speed inSpeed, bool inCrouch);
    
};

