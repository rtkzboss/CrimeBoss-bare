#include "IGS_ChainLoadout.h"
#include "Templates/SubclassOf.h"

FIGS_ChainLoadout::FIGS_ChainLoadout() {
    (*this).ID = nullptr;
    (*this).PrimaryWeapon = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).SecondaryWeapon = TArray<TSubclassOf<UMETA_WeaponInventoryObject>>{};
    (*this).Equipment = TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>{};
}
