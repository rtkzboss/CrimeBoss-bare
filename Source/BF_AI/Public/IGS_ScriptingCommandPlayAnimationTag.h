#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "GameplayTagContainer.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandPlayAnimationTag.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ScriptingCommandPlayAnimationTag;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandPlayAnimationTag : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Failed;
    
    UIGS_ScriptingCommandPlayAnimationTag();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandPlayAnimationTag* ScriptingCommandPlayAnimation(AIGS_GameCharacterFramework* Character, int32 scope, FGameplayTag inAnimationTag, FIGS_InterestPointHolder inLookAt, float InTime);
    
private:
    UFUNCTION()
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
};

