#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UnlockProperties.h"
#include "IGS_WeaponSkinMaterialParameters.h"
#include "IGS_WeaponSkinStruct.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponSkinTableRow.generated.h"

class UIGS_WeaponSkinData;
class UIGS_WieldableInventoryObjectBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponSkinTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag RootTagID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SkinName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SkinImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UIGS_WeaponSkinData> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_ItemQuality SkinQuality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockProperties UnlockProperties;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_WeaponSkinMaterialParameters MaterialParameters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<UIGS_WieldableInventoryObjectBase>, FIGS_WeaponSkinStruct> SkinMaterialSlot;
    
    FIGS_WeaponSkinTableRow();
};

