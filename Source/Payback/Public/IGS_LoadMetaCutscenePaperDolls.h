#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_MetaCutsceneLoadPaperDollDelegateDelegate.h"
#include "IGS_LoadMetaCutscenePaperDolls.generated.h"

class UIGS_LoadMetaCutscenePaperDolls;
class UObject;

UCLASS()
class PAYBACK_API UIGS_LoadMetaCutscenePaperDolls : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneLoadPaperDollDelegate Loaded;
    
    UIGS_LoadMetaCutscenePaperDolls();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_LoadMetaCutscenePaperDolls* LoadMetaCutscenePaperDolls(UObject* inWCO);
    
};

