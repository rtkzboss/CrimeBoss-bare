#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_AIMontageSOVariant.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPin.h"
#include "IGS_ScriptingCommandPlayAnimation.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandPlayAnimation : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandPlayAnimation();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandPlayAnimation* ScriptingCommandPlayAnimation(AIGS_GameCharacterFramework* Character, int32 scope, EIGS_AIMontageSOVariant InAnimation, FIGS_InterestPointHolder inLookAt, float InTime);

private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed);

public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Succeed;

    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Failed;

};
