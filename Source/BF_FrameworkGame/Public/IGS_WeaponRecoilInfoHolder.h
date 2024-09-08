#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponRecoilInfoHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_WeaponRecoilInfoHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecoilPitchBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CompensatingPitchBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LastPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LastYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShooting;
    
    FIGS_WeaponRecoilInfoHolder();
};

