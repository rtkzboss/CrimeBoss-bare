#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ModType : uint8 {
    Mod_Sight UMETA(DisplayName=Sight),
    Mod_Visibility UMETA(DisplayName=Visibility),
    Mod_Barrel UMETA(DisplayName=Barrel),
    Mod_Magazine UMETA(DisplayName=Magazine),
    Mod_Grip UMETA(DisplayName=Grip),
    Mod_Stock UMETA(DisplayName=Stock),
    Mod_Other UMETA(DisplayName=Other),
    Mod_VALID = Mod_Other UMETA(DisplayName=VALID),
    Mod_SecondMagazine = 253 UMETA(DisplayName="Second Magazine"),
    Mod_DynamicSight UMETA(DisplayName="Dynamic Sight"),
    Mod_INVALID UMETA(DisplayName=INVALID),
};
