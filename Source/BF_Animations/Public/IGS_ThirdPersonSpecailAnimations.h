#pragma once
#include "CoreMinimal.h"
#include "IGS_ThirdPersonSpecailAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ThirdPersonSpecailAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* WalkieTalkieEquipMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* HandsetEquipMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* OpenDoorInteractionMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CloseDoorInteractionMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* PickupInteractionMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WalkieTalkieEquipWeaponMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* HandsetEquipWeaponMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* OpenDoorInteractionWeaponMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CloseDoorInteractionWeaponMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* PickupInteractionWeaponMontage;
    
    FIGS_ThirdPersonSpecailAnimations();
};

