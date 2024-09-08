#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandEscape.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ScriptingCommandEscape;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandEscape : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Approach;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Arrive;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Leave;
    
    UIGS_ScriptingCommandEscape();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandEscape* ScriptingCommandEscape(AIGS_GameCharacterFramework* Character, int32 scope, EIGS_Speed Speed);
    
};

