#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ScriptManagerReadyOutputPinDelegate.h"
#include "IGS_WaitForScriptManager.generated.h"

class AIGS_ScriptManagerBase;
class UIGS_WaitForScriptManager;
class UObject;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForScriptManager : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForScriptManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForScriptManager* WaitForScriptManager(UObject* inWorldContextObject);
    
private:
    UFUNCTION()
    void ExecuteOnScriptManagerReady(AIGS_ScriptManagerBase* inScriptManager) const;
    
public:
    UPROPERTY(BlueprintAssignable)
    FScriptManagerReadyOutputPin WhenScriptManagerReady;
    
};

