#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSlotOccupation.h"
#include "IGS_HeisterMenuSlot.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_HeisterMenuSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MenuSlotOccupation SlotOccupation;

    FIGS_HeisterMenuSlot();
};
