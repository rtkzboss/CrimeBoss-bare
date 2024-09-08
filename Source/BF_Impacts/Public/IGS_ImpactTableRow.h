#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ImpactItem.h"
#include "IGS_ImpactTableRow.generated.h"

class UPhysicalMaterial;

USTRUCT()
struct BF_IMPACTS_API FIGS_ImpactTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    FIGS_ImpactItem FallBackItem;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_ImpactItem> ImpactItem;
    
    FIGS_ImpactTableRow();
};

