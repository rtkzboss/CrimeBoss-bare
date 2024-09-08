#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponAmmoDefinition.generated.h"

class UIGS_AmmoInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAmmoDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_AmmoInventoryObject> AmmoObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MagazineCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReserveCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AmmoCostPerShot;
    
    FIGS_WeaponAmmoDefinition();
};

