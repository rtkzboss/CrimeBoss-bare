#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AILoadoutData.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "IGS_AIWeaponPoolDef.h"
#include "IGS_AILoadoutHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_AILoadoutHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIWeaponPoolDef WeaponPool;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_AILoadoutData> WeaponProbability;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NoThrowableChance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_AIThrowableWeaponDef> ThrowablePool;

    UPROPERTY()
    FGameplayTag EmptyWeaponTag;

    UPROPERTY()
    int32 ShowNoThrowableBool;

    BF_FRAMEWORKGAME_API FIGS_AILoadoutHolder();
};
