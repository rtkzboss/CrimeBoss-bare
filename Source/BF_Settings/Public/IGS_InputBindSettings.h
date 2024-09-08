#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "IGS_CachedInputBinding.h"
#include "IGS_SettingsBase.h"
#include "IGS_InputBindSettings.generated.h"

class UIGS_InputActionDefaultKeysDataAsset;
class UIGS_InputActionMapDataAsset;
class UIGS_InputBindSettings;

UCLASS(BlueprintType, DefaultConfig)
class BF_SETTINGS_API UIGS_InputBindSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UIGS_InputActionMapDataAsset* InputActionMapDataAsset;
    
    UPROPERTY()
    UIGS_InputActionDefaultKeysDataAsset* InputActionDefaultKeysAsset;
    
    UPROPERTY()
    FIGS_CachedInputBinding CachedBindings;
    
    UPROPERTY()
    TMap<EIGS_InputAction, FKey> GamepadMappings;
    
    UIGS_InputBindSettings();

    UFUNCTION(BlueprintCallable)
    static void SetInputAxisBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, float InValue, bool inAlternativeKey);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputActionBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, bool inAlternativeKey);
    
    UFUNCTION(BlueprintCallable)
    void RevertSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ResetGamepadBindings();
    
    UFUNCTION(BlueprintPure)
    static UIGS_InputBindSettings* Instance();
    
    UFUNCTION(BlueprintCallable)
    void FailsafeFillEmptyBindings();
    
    UFUNCTION(BlueprintCallable)
    void CacheBindings();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings(bool inSave);
    
};

