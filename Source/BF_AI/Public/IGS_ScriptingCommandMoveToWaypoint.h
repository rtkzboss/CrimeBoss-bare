#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPin.h"
#include "IGS_ScriptingCommandMoveToWaypoint.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_WaypointFramework;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandMoveToWaypoint : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandMoveToWaypoint();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandMoveToWaypoint* ScriptingCommandMoveToWaypoint(AIGS_GameCharacterFramework* Character, int32 scope, AIGS_WaypointFramework* Waypoint, EIGS_Speed Speed, bool Crouch);

    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Approach;

    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Arrive;

    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Leave;

};
