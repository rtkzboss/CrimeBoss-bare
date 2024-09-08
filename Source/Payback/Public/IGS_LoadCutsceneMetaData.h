#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_MetaCutsceneDataDelegateDelegate.h"
#include "IGS_LoadCutsceneMetaData.generated.h"

class UIGS_LoadCutsceneMetaData;
class UObject;

UCLASS()
class PAYBACK_API UIGS_LoadCutsceneMetaData : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDataDelegate Loaded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MetaCutsceneDataDelegate Failed;
    
    UIGS_LoadCutsceneMetaData();

protected:
    UFUNCTION()
    void OnCutsceneDatabaseLoaded(FName inCutsceneID);
    
    UFUNCTION()
    void OnAssetLoaded(FSoftObjectPath inAssetPath);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_LoadCutsceneMetaData* LoadCutsceneMetaData(UObject* inWCO, FText inCutsceneID);
    
};

