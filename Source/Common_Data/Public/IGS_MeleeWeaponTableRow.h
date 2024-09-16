#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MeleeWeaponData.h"
#include "IGS_MeleeWeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_MeleeWeaponTableRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MeleeWeaponTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_MeleeWeaponInventoryObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_MeleeWeaponData Data;

    FIGS_MeleeWeaponTableRow();
};
