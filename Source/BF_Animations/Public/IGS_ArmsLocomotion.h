#pragma once
#include "CoreMinimal.h"
#include "IGS_ArmsLocomotion.generated.h"

class UAnimSequence;
class UBlendSpace1D;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ArmsLocomotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBlendSpace1D* IdleWalkBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* JumpStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* JumpLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* JumpEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SprintStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SprintLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SprintEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SprintInterrupt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SwingAim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SwingCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* SwingHip;
    
    FIGS_ArmsLocomotion();
};

