#pragma once
#include "CoreMinimal.h"
#include "IGS_ArmsAnimtionDefinition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_ArmsAnimtionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ShootingMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsMontageLooping;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ShooterChangeMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalSilent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CheckMagazineMontage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadTacticalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ReloadNormalFight;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LadderShooting;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LadderShooterChange;

    FIGS_ArmsAnimtionDefinition();
};
