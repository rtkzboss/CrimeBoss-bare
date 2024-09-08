#pragma once
#include "CoreMinimal.h"
#include "BPFriendPresenceInfo.h"
#include "BPUniqueNetId.h"
#include "EBPOnlinePresenceState.h"
#include "BPFriendInfo.generated.h"

USTRUCT(BlueprintType)
struct FBPFriendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RealName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBPOnlinePresenceState OnlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPUniqueNetId UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsPlayingSameGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPFriendPresenceInfo PresenceInfo;
    
    ADVANCEDSESSIONS_API FBPFriendInfo();
};

