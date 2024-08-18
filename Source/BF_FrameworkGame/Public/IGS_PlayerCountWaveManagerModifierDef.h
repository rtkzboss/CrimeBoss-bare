#pragma once
#include "CoreMinimal.h"
#include "IGS_WaveManagerModifierDef.h"
#include "IGS_PlayerCountWaveManagerModifierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountWaveManagerModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaveManagerModifierDef TwoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaveManagerModifierDef ThreePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaveManagerModifierDef FourPlayers;
    
    FIGS_PlayerCountWaveManagerModifierDef();
};

