#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CarType : uint8 {
    C_Unknown = 255 UMETA(DisplayName=Unknown),
    C_Sedan = 0 UMETA(DisplayName=Sedan),
    C_Van UMETA(DisplayName=Van),
    C_Truck UMETA(DisplayName=Truck),
    C_Helicopter UMETA(DisplayName=Helicopter),
    C_F150 UMETA(DisplayName="F 150"),
    C_Camry UMETA(DisplayName=Camry),
    C_Lincoln UMETA(DisplayName=Lincoln),
    C_DodgeStealth UMETA(DisplayName="Dodge Stealth"),
    C_DodgeCharger UMETA(DisplayName="Dodge Charger"),
    C_Boat UMETA(DisplayName=Boat),
};
