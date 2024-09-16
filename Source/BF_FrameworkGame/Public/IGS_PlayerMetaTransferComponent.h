#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "Components/ActorComponent.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_PlayerMetaTransferComponent.generated.h"

class AIGS_WieldableBase;
class IIGS_HeisterNumberInterface;
class IIGS_InventoryInterface;
class UIGS_HeisterNumberInterface;
class UIGS_InventoryInterface;
class UIGS_WieldableInventoryObjectBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerMetaTransferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerMetaTransferComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);

    UFUNCTION()
    void HandlePlayerDownState(FIGS_HitInfo inHitInfo);

    UPROPERTY()
    TScriptInterface<IIGS_InventoryInterface> OwningCharacterInventoryInterface;

    UPROPERTY()
    TScriptInterface<IIGS_HeisterNumberInterface> OwningCharacterHeisterNumberInterface;

    UPROPERTY()
    bool bIsBotControlled;

};
