#include "IGS_InputBindSettings.h"
#include "IGS_InputActionDefaultKeysDataAsset.h"
#include "IGS_InputActionMapDataAsset.h"

UIGS_InputBindSettings::UIGS_InputBindSettings() {
    static ConstructorHelpers::FObjectFinder<UIGS_InputActionMapDataAsset> gen(TEXT("/Game/00_Main/Input/InputTables/DA_InputActionMap.DA_InputActionMap"));
    (*this).InputActionMapDataAsset = gen.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputActionDefaultKeysDataAsset> gen2(TEXT("/Game/00_Main/Input/InputTables/DA_DefaultInputKeys.DA_DefaultInputKeys"));
    (*this).InputActionDefaultKeysAsset = gen2.Object;
    (*this).bSettingsValid = true;
}

void UIGS_InputBindSettings::SetInputAxisBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, float InValue, bool inAlternativeKey) {
}

void UIGS_InputBindSettings::SetInputActionBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, bool inAlternativeKey) {
}

void UIGS_InputBindSettings::RevertSettings() {
}

void UIGS_InputBindSettings::ResetToDefaults() {
}

void UIGS_InputBindSettings::ResetGamepadBindings() {
}

UIGS_InputBindSettings* UIGS_InputBindSettings::Instance() {
    return nullptr;
}

void UIGS_InputBindSettings::FailsafeFillEmptyBindings() {
}

void UIGS_InputBindSettings::CacheBindings() {
}

void UIGS_InputBindSettings::ApplySettings(bool inSave) {
}

