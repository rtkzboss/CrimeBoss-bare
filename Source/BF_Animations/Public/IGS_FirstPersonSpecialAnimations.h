#pragma once
#include "CoreMinimal.h"
#include "IGS_FirstPersonSpecialAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonSpecialAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WalkieTalkieEquipMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* HandsetEquipMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* OpenDoorInteractionMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CloseDoorInteractionMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PickupInteractionMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TakeWeaponMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* SpecialTakeWeaponMontage;

    UPROPERTY(EditAnywhere)
    UAnimMontage* WeaponInteractonMontage;

    FIGS_FirstPersonSpecialAnimations();
};
