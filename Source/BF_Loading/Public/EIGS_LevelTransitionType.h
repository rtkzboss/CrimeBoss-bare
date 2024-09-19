#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelTransitionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_LevelTransitionType : uint8 {
    LT_Unknown UMETA(DisplayName=Unknown),
    LT_Loading UMETA(DisplayName=Loading),
    LT_MainMenu UMETA(DisplayName="Main Menu"),
    LT_Meta UMETA(DisplayName=Meta),
    LT_Lobby UMETA(DisplayName=Lobby),
    LT_Video UMETA(DisplayName=Video),
    LT_Mission UMETA(DisplayName=Mission),
    LT_StarterMap UMETA(DisplayName="Starter Map"),
    LT_MultiplayerMenu UMETA(DisplayName="Multiplayer Menu"),
};
