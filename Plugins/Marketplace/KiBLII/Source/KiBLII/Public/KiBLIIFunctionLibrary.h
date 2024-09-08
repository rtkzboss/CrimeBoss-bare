#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "KiBLIIFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class KIBLII_API UKiBLIIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKiBLIIFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static FKeyEvent RemapKeyEvent_SystemToQwerty(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintPure)
    static FKeyEvent RemapKeyEvent_QwertyToSystem(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintPure)
    static FKey RemapKey_QwertyToSystem(FKey Key);
    
    UFUNCTION(BlueprintPure)
    static FString GetKeyboardLayoutsChars();
    
};

