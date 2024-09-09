#pragma once
#include "CoreMinimal.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandMocapEventOutputPinDelegate.h"
#include "IGS_ScriptingCommandPlayMocapAnimation.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UAnimMontage;
class UIGS_AICommand;
class UIGS_ScriptingCommandPlayMocapAnimation;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandPlayMocapAnimation : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandPlayMocapAnimation();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandPlayMocapAnimation* ScriptingCommandPlayMocapAnimation(AIGS_GameCharacterFramework* Character, int32 scope, UAnimMontage* inAnimMontage, FName inSectionName, float InPlayRate, float inStartPosition);
    
private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed);
    
public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandMocapEventOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandMocapEventOutputPin Failed;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandMocapEventOutputPin EventStart;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandMocapEventOutputPin EventEnd;
    
};

