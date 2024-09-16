#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerJoinInfo.h"
#include "IGS_JoinedPlayers.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_JoinedPlayers {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIGS_PlayerJoinInfo FirstPlayer;

    UPROPERTY()
    FIGS_PlayerJoinInfo SecondPlayer;

    UPROPERTY()
    FIGS_PlayerJoinInfo ThirdPlayer;

    UPROPERTY()
    FIGS_PlayerJoinInfo FourthPlayer;

    FIGS_JoinedPlayers();
};
