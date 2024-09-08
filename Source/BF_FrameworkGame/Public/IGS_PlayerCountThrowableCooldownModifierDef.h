#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableCooldownModifierDef.h"
#include "IGS_PlayerCountThrowableCooldownModifierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountThrowableCooldownModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FIGS_ThrowableCooldownModifierDef TwoPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_ThrowableCooldownModifierDef ThreePlayers;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_ThrowableCooldownModifierDef FourPlayers;
    
    FIGS_PlayerCountThrowableCooldownModifierDef();
};

