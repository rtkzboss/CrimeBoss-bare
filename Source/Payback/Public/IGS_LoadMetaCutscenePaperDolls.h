#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_MetaCutsceneLoadPaperDollDelegate.h"
#include "IGS_LoadMetaCutscenePaperDolls.generated.h"

class UObject;

UCLASS()
class PAYBACK_API UIGS_LoadMetaCutscenePaperDolls : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_LoadMetaCutscenePaperDolls();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_LoadMetaCutscenePaperDolls* LoadMetaCutscenePaperDolls(UObject* inWCO);

    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneLoadPaperDollDelegate Loaded;

};
