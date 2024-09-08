#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockRewardForcedPool.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockRewardForcedPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AllowedQuality;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockRewardForcedPool();
};

