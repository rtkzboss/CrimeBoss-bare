#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StreamlineFeatureRequirements.h"
#include "UStreamlineFeature.h"
#include "UStreamlineFeatureRequirementsFlags.h"
#include "UStreamlineFeatureSupport.h"
#include "StreamlineLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibrary();

    UFUNCTION(BlueprintPure)
    static UStreamlineFeatureSupport QueryStreamlineFeatureSupport(UStreamlineFeature Feature);
    
    UFUNCTION(BlueprintPure)
    static bool IsStreamlineFeatureSupported(UStreamlineFeature Feature);
    
    UFUNCTION(BlueprintPure)
    static FStreamlineFeatureRequirements GetStreamlineFeatureInformation(UStreamlineFeature Feature);
    
    UFUNCTION(BlueprintPure)
    static void BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired);
    
};

