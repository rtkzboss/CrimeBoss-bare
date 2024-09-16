#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "IGS_GlassHit.generated.h"

USTRUCT()
struct FIGS_GlassHit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize10 Location;

    UPROPERTY()
    FVector2D UVLocation;

    UPROPERTY()
    float SizeRatio;

    BF_FRAMEWORKGAME_API FIGS_GlassHit();
};
