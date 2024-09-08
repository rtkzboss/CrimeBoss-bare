#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_ToolFunctionLibrary.generated.h"

class UCompositeDataTable;
class UDataTable;
class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class COMMON_UTILS_API UIGS_ToolFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ToolFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetRenderInDepthPass(UPrimitiveComponent* InComponent, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsEOSOnlineSubsystemActive(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRegionCodeFromLocation(const FString& CountryCode, const FString& RegionCode, const FString& City);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetRecentLevels();
    
    UFUNCTION(BlueprintPure)
    static int32 EvaluateGeoLocation(const FString& LocalRegion, const FString& RemoteRegion);
    
    UFUNCTION(BlueprintCallable)
    static void AppendTableToComposite(UCompositeDataTable* inTargetCompositeTable, UDataTable* inNewTable);
    
};

