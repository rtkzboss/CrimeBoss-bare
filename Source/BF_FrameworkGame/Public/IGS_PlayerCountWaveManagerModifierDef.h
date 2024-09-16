#pragma once
#include "CoreMinimal.h"
#include "IGS_WaveManagerModifierDef.h"
#include "IGS_PlayerCountWaveManagerModifierDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountWaveManagerModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_WaveManagerModifierDef TwoPlayers;

    UPROPERTY(EditDefaultsOnly)
    FIGS_WaveManagerModifierDef ThreePlayers;

    UPROPERTY(EditDefaultsOnly)
    FIGS_WaveManagerModifierDef FourPlayers;

    FIGS_PlayerCountWaveManagerModifierDef();
};
