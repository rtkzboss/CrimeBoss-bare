#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_ThrowableInventoryObject.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPin.h"
#include "Templates/SubclassOf.h"
#include "IGS_ScriptingThrowThrowable.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS()
class BF_AI_API UIGS_ScriptingThrowThrowable : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingThrowThrowable();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingThrowThrowable* ScriptingCommandThrowThrowable(AIGS_GameCharacterFramework* inCharacter, FIGS_InterestPointHolder inTarget, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable);

private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed);

public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Succeed;

    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Failed;

protected:
    UPROPERTY()
    TSubclassOf<UIGS_ThrowableInventoryObject> m_Throwable;

};
