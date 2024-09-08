#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "GameplayTagContainer.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_CarType.h"
#include "IGS_NetTransform.h"
#include "IGS_ReplicationAnimationDataHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReplicationAnimationDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag MontageVariationTag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_NetTransform EventTransform;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float RequestedDuration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bPlayingAnimation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_AnimationTaskFinishedReason FinishReason;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_CarType CarType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_CarSeatVariant SeatVariant;
    
    BF_NETWORK_API FIGS_ReplicationAnimationDataHolder();
};

