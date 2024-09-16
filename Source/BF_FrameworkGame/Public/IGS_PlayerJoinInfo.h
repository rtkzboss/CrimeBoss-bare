#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "EIGS_CharacterID.h"
#include "IGS_PlayerJoinInfo.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerStateGame;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerJoinInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;

    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* CurrentPlayerPawn;

    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerStateGame* PlayerState;

    UPROPERTY(BlueprintReadOnly)
    int32 HeisterNumber;

    UPROPERTY()
    int32 InitialJoiningHeisterNumber;

    UPROPERTY(BlueprintReadOnly)
    bool IsBot;

    UPROPERTY(BlueprintReadOnly)
    bool WasBotRightBefore;

    UPROPERTY(BlueprintReadOnly)
    bool IsDisconnected;

    UPROPERTY(BlueprintReadOnly)
    bool IsDead;

    UPROPERTY(BlueprintReadOnly)
    bool WasDeadRightBefore;

    UPROPERTY(BlueprintReadOnly)
    bool IsOccupied;

    UPROPERTY(BlueprintReadOnly)
    bool PreviouslyUsed;

    UPROPERTY(BlueprintReadOnly)
    bool BotSwitchedAfterDeath;

    UPROPERTY()
    int32 HeisterDataID;

    UPROPERTY()
    bool bCachedMaxLevel;

    UPROPERTY()
    EIGS_CharacterID CachedCharID;

    UPROPERTY()
    int32 UniqueId;

    UPROPERTY()
    int32 CachedGenericID;

    UPROPERTY()
    FCommonHeisterData CachedHeisterData;

    FIGS_PlayerJoinInfo();
};
