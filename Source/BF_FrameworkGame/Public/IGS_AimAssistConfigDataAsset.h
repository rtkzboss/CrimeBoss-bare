#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_BulletBendingConfig.h"
#include "IGS_SlowdownConfig.h"
#include "IGS_SoftLockConfig.h"
#include "IGS_AimAssistConfigDataAsset.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AimAssistConfigDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AimAssistConfigDataAsset();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateTargetsRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AimAreaExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSlowdownEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_SlowdownConfig SlowdownConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSoftLockEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_SoftLockConfig SoftLockConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBulletBendingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_BulletBendingConfig BulletBendingConfig;
    
};

