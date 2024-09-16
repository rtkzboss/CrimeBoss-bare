#pragma once
#include "CoreMinimal.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIWeaponPoolDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIWeaponPoolDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>> PrimaryWeapons;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>> SecondaryWeapons;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>> MeleeWeapons;

    FIGS_AIWeaponPoolDef();
};
