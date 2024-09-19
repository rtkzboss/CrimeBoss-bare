#pragma once
#include "CoreMinimal.h"
#include "EHoudiniExecutableType.generated.h"

UENUM(BlueprintType)
enum EHoudiniExecutableType {
    HRSHE_Houdini UMETA(DisplayName=Houdini),
    HRSHE_HoudiniFX UMETA(DisplayName="Houdini FX"),
    HRSHE_HoudiniCore UMETA(DisplayName="Houdini Core"),
    HRSHE_HoudiniIndie UMETA(DisplayName="Houdini Indie"),
};
