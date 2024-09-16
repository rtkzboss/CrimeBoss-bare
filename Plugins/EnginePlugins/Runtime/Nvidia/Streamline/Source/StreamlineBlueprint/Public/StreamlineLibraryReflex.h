#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UStreamlineFeatureSupport.h"
#include "UStreamlineReflexMode.h"
#include "StreamlineLibraryReflex.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryReflex();

    UFUNCTION(BlueprintCallable)
    static void SetReflexMode(const UStreamlineReflexMode Mode);

    UFUNCTION(BlueprintPure)
    static UStreamlineFeatureSupport QueryReflexSupport();

    UFUNCTION(BlueprintPure)
    static bool IsReflexSupported();

    UFUNCTION(BlueprintPure)
    static float GetRenderLatencyInMs();

    UFUNCTION(BlueprintPure)
    static UStreamlineReflexMode GetReflexMode();

    UFUNCTION(BlueprintPure)
    static float GetGameToRenderLatencyInMs();

    UFUNCTION(BlueprintPure)
    static float GetGameLatencyInMs();

    UFUNCTION(BlueprintPure)
    static UStreamlineReflexMode GetDefaultReflexMode();

};
