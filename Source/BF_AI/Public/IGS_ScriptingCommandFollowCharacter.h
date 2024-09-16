#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPin.h"
#include "IGS_ScriptingCommandFollowCharacter.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_ScriptingCommandFollowCharacter : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandFollowCharacter();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandFollowCharacter* ScriptingCommandFollowCharacter(AIGS_GameCharacterFramework* inFollowingCharacter, AIGS_GameCharacterFramework* inFollowedCharacter, EIGS_Speed inSpeed, float inFollowDistance);

private:
    UFUNCTION()
    void OnFinished(AActor* inNewFollowActor);

public:
    UPROPERTY(BlueprintAssignable)
    FScriptingCommandOutputPin Finished;

};
