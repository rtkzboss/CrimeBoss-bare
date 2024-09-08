#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "IGS_FPS2MetaAdapter.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_SAVE_API UIGS_FPS2MetaAdapter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_FPS2MetaAdapter();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void TransferDataToMeta(const UObject* inWCO, FIGS_SharedMetaTransfer_Data inSharedData, FIGS_FPS2Meta_Data inFPSData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void LoadFPSData(const UObject* inWCO, bool& bIsLoaded, FIGS_SharedMetaTransfer_Data& SharedData, FIGS_FPS2Meta_Data& FPSData);
    
};

