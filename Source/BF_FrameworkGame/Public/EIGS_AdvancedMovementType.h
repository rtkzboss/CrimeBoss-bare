#pragma once
#include "CoreMinimal.h"
#include "EIGS_AdvancedMovementType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AdvancedMovementType : uint8 {
    AMT_None UMETA(DisplayName=None),
    AMT_ZiplineGrab UMETA(DisplayName="Zipline Grab"),
    AMT_LadderGrab UMETA(DisplayName="Ladder Grab"),
    AMT_LadderLeave UMETA(DisplayName="Ladder Leave"),
    AMT_RopeGrab UMETA(DisplayName="Rope Grab"),
    AMT_RopeLeave UMETA(DisplayName="Rope Leave"),
    AMT_VentEnter UMETA(DisplayName="Vent Enter"),
    AMT_RappelGrab UMETA(DisplayName="Rappel Grab"),
    AMT_RappelLeave UMETA(DisplayName="Rappel Leave"),
    AMT_CoopClimbHelp UMETA(DisplayName="Coop Climb Help"),
    AMT_CoopClimbing UMETA(DisplayName="Coop Climbing"),
};
