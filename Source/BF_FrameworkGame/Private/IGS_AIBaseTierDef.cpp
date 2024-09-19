#include "IGS_AIBaseTierDef.h"
#include "IGS_AILoadoutData.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "Templates/SubclassOf.h"

class AIGS_GameCharacterFramework;

FIGS_AIBaseTierDef::FIGS_AIBaseTierDef() {
    (*this).Enabled = true;
    (*this).Character.Controller = FSoftObjectPath();
    (*this).Character.Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
    (*this).Loadout.WeaponPool.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).Loadout.WeaponPool.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).Loadout.WeaponPool.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).Loadout.WeaponProbability = TArray<FIGS_AILoadoutData>{};
    (*this).Loadout.NoThrowableChance = 0;
    (*this).Loadout.ThrowablePool = TArray<FIGS_AIThrowableWeaponDef>{};
    (*this).Loadout.EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).Loadout.ShowNoThrowableBool = 0;
    (*this).Specialization = FGameplayTag::RequestGameplayTag(TEXT("AI.Specialization.Default"));
}
