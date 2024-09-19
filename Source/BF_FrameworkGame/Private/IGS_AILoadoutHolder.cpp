#include "IGS_AILoadoutHolder.h"
#include "IGS_AIMeleeWeaponDef.h"
#include "IGS_AIPrimaryWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.h"
#include "Templates/SubclassOf.h"

FIGS_AILoadoutHolder::FIGS_AILoadoutHolder() {
    (*this).WeaponPool.PrimaryWeapons = TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>>{};
    (*this).WeaponPool.SecondaryWeapons = TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>>{};
    (*this).WeaponPool.MeleeWeapons = TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>>{};
    (*this).WeaponProbability = TArray<FIGS_AILoadoutData>{};
    (*this).NoThrowableChance = 0;
    (*this).ThrowablePool = TArray<FIGS_AIThrowableWeaponDef>{};
    (*this).EmptyWeaponTag = FGameplayTag::RequestGameplayTag(TEXT("Item.Wieldable.Weapon"));
    (*this).ShowNoThrowableBool = 0;
}
