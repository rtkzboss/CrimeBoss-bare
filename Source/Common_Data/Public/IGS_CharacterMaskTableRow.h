#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_MaskAkType.h"
#include "IGS_CharacterMaskBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterMaskTableRow.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CharacterMaskTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_CharacterMaskBase> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UMeshComponent> MaskMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MaskAkType MaskAkType;

    FIGS_CharacterMaskTableRow();
};
