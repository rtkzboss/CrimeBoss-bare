#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_CharacterClasses.h"
#include "IGS_UnlockProperties.h"
#include "IGS_CharacterSkinTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CharacterSkinTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CharacterClasses CharacterClasses;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockProperties UnlockProperties;

    FIGS_CharacterSkinTableRow();
};
