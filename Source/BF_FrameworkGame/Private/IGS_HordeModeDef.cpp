#include "IGS_HordeModeDef.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "Templates/SubclassOf.h"

class AIGS_GameCharacterFramework;

FIGS_HordeModeDef::FIGS_HordeModeDef() {
    (*this).Dragon.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Dragon.Weapons.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Dragon.Weapons.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Dragon.Weapons.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Hielo.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Hielo.Weapons.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Hielo.Weapons.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Hielo.Weapons.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Khan.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Khan.Weapons.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Khan.Weapons.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Khan.Weapons.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Cagnali.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Cagnali.Weapons.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Cagnali.Weapons.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Cagnali.Weapons.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Friendlies.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Friendlies.Weapons.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Friendlies.Weapons.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Friendlies.Weapons.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
}
