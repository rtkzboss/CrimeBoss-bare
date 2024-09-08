#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_HUDInventoryWeaponData.generated.h"

class AIGS_WieldableBase;
class UTexture;

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_HUDInventoryWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AIGS_WieldableBase> WieldableID;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_WieldableSlot Slot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UTexture> WieldableIcon;
    
    FIGS_HUDInventoryWeaponData();
};

