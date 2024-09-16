#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.h"
#include "IGS_ModInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_TPP_ModAnimationDefinition.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_TPP_ModAnimationDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UIGS_ModInventoryObject> ID;

    UPROPERTY(EditAnywhere)
    EIGS_ModType ModTypes;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* GripAnimation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* GripAdditiveAnimation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* GripCalm;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* GripGunDown;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadCheck;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadCheck_Weapon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadNormalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* WeaponReloadTacticalFight;

    UPROPERTY(BlueprintReadOnly)
    bool HasGripMod;

    FIGS_TPP_ModAnimationDefinition();
};
