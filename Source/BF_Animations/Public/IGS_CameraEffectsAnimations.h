#pragma once
#include "CoreMinimal.h"
#include "IGS_CameraEffectsAnimations.generated.h"

USTRUCT(BlueprintType)
struct FIGS_CameraEffectsAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool Hit;
    
    UPROPERTY(BlueprintReadOnly)
    bool CameraShakeEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraShakeIntensity;
    
    UPROPERTY(BlueprintReadOnly)
    float Alpha;
    
    UPROPERTY(BlueprintReadOnly)
    float X_Strength;
    
    UPROPERTY(BlueprintReadOnly)
    float Y_Strength;
    
    UPROPERTY(EditAnywhere)
    float MaximumEffectDistance;
    
    UPROPERTY(EditAnywhere)
    float MinimumEffectDistance;
    
    BF_ANIMATIONS_API FIGS_CameraEffectsAnimations();
};

