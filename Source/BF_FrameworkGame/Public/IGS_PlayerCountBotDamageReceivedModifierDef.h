#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerCountBotDamageReceivedModifierDef.generated.h"

class UCurveFloat;

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountBotDamageReceivedModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* OnePlayer;

    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* TwoPlayers;

    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* ThreePlayers;

    FIGS_PlayerCountBotDamageReceivedModifierDef();
};
