#pragma once
#include "CoreMinimal.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIWeaponDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIWeaponDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinition;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag WeaponTag;

    FIGS_AIWeaponDef();
};
