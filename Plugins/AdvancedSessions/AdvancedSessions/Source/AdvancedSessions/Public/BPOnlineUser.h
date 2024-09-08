#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "BPOnlineUser.generated.h"

USTRUCT(BlueprintType)
struct FBPOnlineUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPUniqueNetId UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RealName;
    
    ADVANCEDSESSIONS_API FBPOnlineUser();
};

