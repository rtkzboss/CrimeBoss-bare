#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_EyeHeightTargetType.h"
#include "IGS_CameraComponentBase.h"
#include "IGS_CameraShake.h"
#include "IGS_EyeHeightHolder.h"
#include "IGS_PlayerCameraComponent.generated.h"

class AIGS_PlayerCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerCameraComponent : public UIGS_CameraComponentBase {
    GENERATED_BODY()
public:
    UIGS_PlayerCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCameraShake(const FGameplayTag inCameraShakeTag);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOVOverrideInterpolated(bool inOverrideFOV, float inFOVValue, bool inTortillaEnabled, float inInterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOVOverride(bool inOverrideFOV, float inFOVValue, float inTortillaBlendEffect);
    
    UFUNCTION(BlueprintCallable)
    void PlayCameraShake(const FGameplayTag inCameraShakeTag, float inIntensity);
    
    UFUNCTION()
    void OnRep_CameraShakeTags();
    
    UFUNCTION(BlueprintCallable)
    static EIGS_EyeHeightTargetType GetEyeHeightTarget(AIGS_PlayerCharacter* inPlayerCharacter, bool inAiming);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_EyeHeightTargetType, FIGS_EyeHeightHolder> EyeHeightHolders;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_EyeHeightTargetType CurrentEyeHeightTargetType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentEyeHeightTarget;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraBoneWrongAxisFix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraLadderTopEndInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraLadderRootMotionInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FOVInterpolationEndTolerance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_CameraShakeTags)
    TArray<FIGS_CameraShake> ActiveCameraShakes;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName CameraBoneAttachment;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

