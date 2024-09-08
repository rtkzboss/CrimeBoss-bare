#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_SlideAnimationData.generated.h"

class UAimOffsetBlendSpace;
class UAnimSequence;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_TPP_SlideAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAimOffsetBlendSpace* Weapon_Slide_Aim_Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Slide_In;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Slide_Loop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Slide_Out_Run;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Slide_Out_Crouch_Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Slide_Out_Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* Slide_Out_Crouch_Walk;
    
    FIGS_TPP_SlideAnimationData();
};

