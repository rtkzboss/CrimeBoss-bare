#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "EIGS_WieldableSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_WieldableReplicatedData.generated.h"

class UIGS_WeaponSkinData;
class UMETA_WeaponInventoryObject;

USTRUCT()
struct FIGS_WieldableReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 UniqueId;
    
    UPROPERTY()
    int8 TableIndex;
    
    UPROPERTY()
    EIGS_WieldableSlot Slot;
    
    UPROPERTY()
    EIGS_ItemType ItemType;
    
    UPROPERTY()
    TSoftObjectPtr<UIGS_WeaponSkinData> WeaponSkin;
    
    UPROPERTY()
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinition;
    
    UPROPERTY()
    TSoftObjectPtr<UIGS_WeaponSkinData> DefaultWeaponSkin;
    
    UPROPERTY()
    TArray<int16> Mods;
    
    UPROPERTY()
    FIGS_InventoryObjectUniversalData UniversalData;
    
    BF_NETWORK_API FIGS_WieldableReplicatedData();
};

