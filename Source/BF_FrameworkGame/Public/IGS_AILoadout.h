#pragma once
#include "CoreMinimal.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "Templates/SubclassOf.h"
#include "IGS_AILoadout.generated.h"

USTRUCT(BlueprintType)
struct FIGS_AILoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AIPrimaryWeaponDef> PrimaryWeapon;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AISecondaryWeaponDef> SecondaryWeapon;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AIMeleeWeaponDef> MeleeWeapon;

    BF_FRAMEWORKGAME_API FIGS_AILoadout();
};
