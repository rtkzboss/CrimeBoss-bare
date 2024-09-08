#pragma once
#include "CoreMinimal.h"
#include "META_WeaponSaveData.h"
#include "META_WeaponSaveDataArray.generated.h"

USTRUCT(BlueprintType)
struct FMETA_WeaponSaveDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_WeaponSaveData> WeaponsSaveData;
    
    PAYBACKDEFINITIONS_API FMETA_WeaponSaveDataArray();
};

