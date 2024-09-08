#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "IGS_GameLevelScriptActor.generated.h"

class AIGS_ObjectiveScenarioBase;
class AIGS_ScriptManagerBase;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_GameLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AIGS_ObjectiveScenarioBase* ObjectiveScenarioInstance;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_ScriptManagerBase* ScriptManagerInstance;
    
    AIGS_GameLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

