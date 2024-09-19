#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.generated.h"

UENUM(BlueprintType)
enum class EIGS_InputDevice : uint8 {
    ID_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    ID_KeyboardAndMouse = 0 UMETA(DisplayName="Keyboard And Mouse"),
    ID_Gamepad_PS4 UMETA(DisplayName="Gamepad PS 4"),
    ID_Gamepad_PS5 UMETA(DisplayName="Gamepad PS 5"),
    ID_Gamepad_PSMove UMETA(DisplayName="Gamepad PS Move"),
    ID_Gamepad_XOne UMETA(DisplayName="Gamepad X One"),
    ID_Gamepad_XBoxSX UMETA(DisplayName="Gamepad X Box SX"),
    ID_Gamepad_Switch UMETA(DisplayName="Gamepad Switch"),
    ID_Gamepad_SteamDeck UMETA(DisplayName="Gamepad Steam Deck"),
    ID_VR_Oculus UMETA(DisplayName="VR Oculus"),
    ID_VR_HTC_Vive UMETA(DisplayName="VR HTC Vive"),
    ID_VR_PSVR_Gamepad UMETA(DisplayName="VR PSVR Gamepad"),
    ID_VR_PSVR_PSMove UMETA(DisplayName="VR PSVR PS Move"),
    ID_MAX UMETA(Hidden),
};
