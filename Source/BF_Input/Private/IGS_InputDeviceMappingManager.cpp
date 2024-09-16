#include "IGS_InputDeviceMappingManager.h"
#include "IGS_InputActionMapDataAsset.h"
#include "IGS_InputDeviceIconsDataAsset.h"

UIGS_InputDeviceMappingManager::UIGS_InputDeviceMappingManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen(TEXT("/Game/00_Main/Input/InputTables/DA_PS5_InputKeyIcons.DA_PS5_InputKeyIcons"));
    (*this).PS5InputDeviceIconDataAsset = gen.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen2(TEXT("/Game/00_Main/Input/InputTables/DA_XBSX_InputKeyIcons.DA_XBSX_InputKeyIcons"));
    (*this).XBOXInputDeviceIconDataAsset = gen2.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen3(TEXT("/Game/00_Main/Input/InputTables/DA_SteamDeck_InputKeyIcons.DA_SteamDeck_InputKeyIcons"));
    (*this).SteamDeckInputDeviceIconDataAsset = gen3.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputDeviceIconsDataAsset> gen4(TEXT("/Game/00_Main/Input/InputTables/DA_PC_InputKeyIcons.DA_PC_InputKeyIcons"));
    (*this).PCInputDeviceIconDataAsset = gen4.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_InputActionMapDataAsset> gen5(TEXT("/Game/00_Main/Input/InputTables/DA_InputActionMap.DA_InputActionMap"));
    (*this).InputActionMapDataAsset = gen5.Object;
}

void UIGS_InputDeviceMappingManager::GetInputActionSymbolBP(FKey inKey, EIGS_InputDevice inInputDevice, FName& outSymbol) {
}

