#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UStreamlineDLSSGMode.h"
#include "UStreamlineFeatureSupport.h"
#include "StreamlineLibraryDLSSG.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryDLSSG();

    UFUNCTION(BlueprintCallable)
    static void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);

    UFUNCTION(BlueprintPure)
    static UStreamlineFeatureSupport QueryDLSSGSupport();

    UFUNCTION(BlueprintPure)
    static bool IsDLSSGSupported();

    UFUNCTION(BlueprintPure)
    static bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);

    UFUNCTION(BlueprintPure)
    static TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();

    UFUNCTION(BlueprintPure)
    static UStreamlineDLSSGMode GetDLSSGMode();

    UFUNCTION(BlueprintPure)
    static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);

    UFUNCTION(BlueprintPure)
    static UStreamlineDLSSGMode GetDefaultDLSSGMode();

};
