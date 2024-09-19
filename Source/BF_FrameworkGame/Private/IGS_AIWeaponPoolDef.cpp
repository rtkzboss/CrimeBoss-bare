#include "IGS_AIWeaponPoolDef.h"
#include "Templates/SubclassOf.h"

FIGS_AIWeaponPoolDef::FIGS_AIWeaponPoolDef() {
    (*this).PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
}
