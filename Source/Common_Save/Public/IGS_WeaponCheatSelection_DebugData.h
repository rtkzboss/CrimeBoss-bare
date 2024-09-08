#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponCheatSelection_DebugData.generated.h"

class UIGS_InventoryObjectFramework;
class UIGS_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_WeaponCheatSelection_DebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponToAdd;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UIGS_InventoryObjectFramework> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<int32> SelectedIndices;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText WeaponPreviewText;
    
    FIGS_WeaponCheatSelection_DebugData();
};

