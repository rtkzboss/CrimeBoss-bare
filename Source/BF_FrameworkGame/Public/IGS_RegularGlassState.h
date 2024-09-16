#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IGS_RegularGlassState.generated.h"

USTRUCT()
struct FIGS_RegularGlassState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize10 RelativeHoleLocation;

    UPROPERTY()
    FVector_NetQuantize100 UVOffset;

    UPROPERTY()
    bool bIsBroken;

    UPROPERTY()
    TArray<uint8> BrokenGlassShards;

    BF_FRAMEWORKGAME_API FIGS_RegularGlassState();
};
