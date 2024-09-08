#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_RainOnCameraEffectData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_RainOnCameraEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RainOnCameraDryingUpDuration;
    
    UPROPERTY(EditAnywhere)
    float StartDryingUpAfter;
    
    UPROPERTY(EditAnywhere)
    float DownpourStopDuration;
    
    UPROPERTY(EditAnywhere)
    float RainOnCameraExteriorReactionSpeed;
    
    UPROPERTY(EditAnywhere)
    float ShortWhileOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UObject> RainOnCameraExterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UObject> RainOnCameraInterior;
    
    FIGS_RainOnCameraEffectData();
};

