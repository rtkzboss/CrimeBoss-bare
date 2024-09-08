#pragma once
#include "CoreMinimal.h"
#include "META_ItemSaveDataBase.h"
#include "META_EquipmentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_EquipmentSaveData : public FMETA_ItemSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* EquipmentID;
    
    PAYBACKDEFINITIONS_API FMETA_EquipmentSaveData();
};

