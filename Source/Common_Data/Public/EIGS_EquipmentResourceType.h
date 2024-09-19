#pragma once
#include "CoreMinimal.h"
#include "EIGS_EquipmentResourceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EquipmentResourceType : uint8 {
    ERT_Charges UMETA(DisplayName=Charges),
    ERT_Cooldown UMETA(DisplayName=Cooldown),
    ERT_Custom = 100 UMETA(DisplayName=Custom),
};
