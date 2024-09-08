#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "BPSteamGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FBPSteamGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBPUniqueNetId GroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString GroupName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString GroupTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 numOnline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 numInGame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 numChatting;
    
    ADVANCEDSTEAMSESSIONS_API FBPSteamGroupInfo();
};

