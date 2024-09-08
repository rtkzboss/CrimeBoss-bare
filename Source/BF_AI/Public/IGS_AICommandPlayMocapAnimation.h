#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandPlayMocapAnimation.generated.h"

class UAnimMontage;

UCLASS()
class BF_AI_API UIGS_AICommandPlayMocapAnimation : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AnimationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartPosition;
    
    UIGS_AICommandPlayMocapAnimation();

};

