#pragma once
#include "CoreMinimal.h"
#include "IGS_AIUnitBaseDataMultipliers.h"
#include "IGS_PlayerCountAIDifficultyModifierDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountAIDifficultyModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_AIUnitBaseDataMultipliers TwoPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_AIUnitBaseDataMultipliers ThreePlayers;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_AIUnitBaseDataMultipliers FourPlayers;
    
    FIGS_PlayerCountAIDifficultyModifierDef();
};

