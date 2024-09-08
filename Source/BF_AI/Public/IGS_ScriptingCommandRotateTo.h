#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandRotateTo.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ScriptingCommandRotateTo;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandRotateTo : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Failed;
    
    UIGS_ScriptingCommandRotateTo();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandRotateTo* ScriptingCommandRotateTo(AIGS_GameCharacterFramework* Character, int32 scope, float inDuration, FIGS_InterestPointHolder inLookAt);
    
private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
};

