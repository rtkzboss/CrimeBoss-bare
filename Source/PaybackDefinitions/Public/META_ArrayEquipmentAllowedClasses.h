#pragma once
#include "CoreMinimal.h"
#include "META_ArrayEquipmentAllowedClasses.generated.h"

USTRUCT(BlueprintType)
struct FMETA_ArrayEquipmentAllowedClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* Equipment;

    PAYBACKDEFINITIONS_API FMETA_ArrayEquipmentAllowedClasses();
};
