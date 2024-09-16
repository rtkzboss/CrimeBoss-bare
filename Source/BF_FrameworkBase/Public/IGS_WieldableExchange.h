#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_WieldableBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WieldableExchange.generated.h"

class UIGS_WieldableInventoryObjectBase;

USTRUCT()
struct BF_FRAMEWORKBASE_API FIGS_WieldableExchange {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<AIGS_WieldableBase> NewWieldableActorClass;

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<UIGS_WieldableInventoryObjectBase> NewInventoryObject;

    UPROPERTY(VisibleAnywhere)
    EIGS_WieldableSlot SlotType;

    UPROPERTY(VisibleAnywhere)
    bool bIsExchangeRunning;

    UPROPERTY(VisibleAnywhere)
    bool bIsExchangePrepared;

    UPROPERTY(VisibleAnywhere)
    bool bShouldStartExchange;

    UPROPERTY(VisibleAnywhere)
    bool bShouldSkipAnimation;

    FIGS_WieldableExchange();
};
