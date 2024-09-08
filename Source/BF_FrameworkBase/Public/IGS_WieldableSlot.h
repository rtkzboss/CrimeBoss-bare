#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_WieldableSlot.generated.h"

class AIGS_WieldableBase;
class UIGS_WieldableInventoryObjectBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_WieldableSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<AIGS_WieldableBase> WieldableActorClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WieldableInventoryObjectBase> InventoryObject;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_WieldableSlot SlotType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsLoading;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsPendingRemoval;
    
    FIGS_WieldableSlot();
};

