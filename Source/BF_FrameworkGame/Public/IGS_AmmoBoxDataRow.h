#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EIGS_AmmoBoxItem.h"
#include "IGS_AmmoBoxDataRow.generated.h"

class UIGS_AmmoBoxDataAsset;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AmmoBoxDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AmmoBoxItem ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_AmmoBoxDataAsset* AmmoProbabilities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* BoxMaterial;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxScale;

    FIGS_AmmoBoxDataRow();
};
