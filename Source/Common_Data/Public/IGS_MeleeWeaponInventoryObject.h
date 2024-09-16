#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_MeleeWeaponInventoryObject.generated.h"

UCLASS(Abstract)
class COMMON_DATA_API UIGS_MeleeWeaponInventoryObject : public UIGS_WieldableInventoryObjectBase {
    GENERATED_BODY()
public:
    UIGS_MeleeWeaponInventoryObject();

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinitionObject;

};
