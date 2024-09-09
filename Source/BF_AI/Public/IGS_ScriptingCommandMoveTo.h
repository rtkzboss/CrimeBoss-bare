#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "UObject/NoExportTypes.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandMoveTo.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ScriptingCommandMoveTo;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandMoveTo : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandMoveTo();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandMoveTo* ScriptingCommandMoveTo(AIGS_GameCharacterFramework* Character, int32 scope, FVector inPositon, FVector inLookAtPos, bool inUseLookAtPos, EIGS_Speed inMovementSpeed, float inStoppingDistance);
    
private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Failed;
    
};

