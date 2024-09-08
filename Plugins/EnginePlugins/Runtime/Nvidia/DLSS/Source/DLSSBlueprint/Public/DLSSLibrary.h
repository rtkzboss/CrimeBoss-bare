#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UDLSSMode.h"
#include "UDLSSSupport.h"
#include "DLSSLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UDLSSLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDLSSLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDLSSSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    static void SetDLSSMode(UDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintPure)
    static UDLSSSupport QueryDLSSSupport();
    
    UFUNCTION(BlueprintPure)
    static UDLSSSupport QueryDLSSRRSupport();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSRRSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSRREnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSModeSupported(UDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLAAEnabled();
    
    UFUNCTION(BlueprintPure)
    static TArray<UDLSSMode> GetSupportedDLSSModes();
    
    UFUNCTION(BlueprintPure)
    static float GetDLSSSharpness();
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSRRMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);
    
    UFUNCTION(BlueprintPure)
    static UDLSSMode GetDLSSMode();
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintPure)
    static UDLSSMode GetDefaultDLSSMode();
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLSSRR(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLSS(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLAA(bool bEnabled);
    
};

