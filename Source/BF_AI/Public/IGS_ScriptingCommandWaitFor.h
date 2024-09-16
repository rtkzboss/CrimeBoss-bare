#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPin.h"
#include "IGS_ScriptingCommandWaitFor.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandWaitFor : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandWaitFor();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandWaitFor* ScriptingCommandWaitFor(AIGS_GameCharacterFramework* Character, int32 scope, float InTime, FIGS_InterestPointHolder inLookAt);

private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);

public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Succeed;

    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Failed;

};
