#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_AvoidanceAnimationDatabase.generated.h"

class UAnimMontage;

UCLASS()
class BF_ANIMATIONS_API UIGS_AvoidanceAnimationDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AvoidanceAnimationDatabase();

    UPROPERTY(EditAnywhere)
    UAnimMontage* RollToStand;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* RollToCrouch;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SlideToStandSMG;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SlideToCrouchSMG;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SlideToStandSMGShort;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SlideToCrouchSMGShort;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SlideToStandPistol;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* SlideToCrouchPistol;
    
};

