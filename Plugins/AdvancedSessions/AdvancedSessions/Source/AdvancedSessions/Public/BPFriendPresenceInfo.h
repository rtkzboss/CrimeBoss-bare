#pragma once
#include "CoreMinimal.h"
#include "EBPOnlinePresenceState.h"
#include "BPFriendPresenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FBPFriendPresenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOnline;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsPlaying;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsPlayingThisGame;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsJoinable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasVoiceSupport;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBPOnlinePresenceState PresenceState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StatusString;

    ADVANCEDSESSIONS_API FBPFriendPresenceInfo();
};
