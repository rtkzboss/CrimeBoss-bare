#include "IGS_HordeModeSideDef.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "Templates/SubclassOf.h"

FIGS_HordeModeSideDef::FIGS_HordeModeSideDef() {
    (*this).Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Weapons.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Weapons.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Weapons.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
}
