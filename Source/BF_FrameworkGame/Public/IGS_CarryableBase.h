#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableBase.generated.h"

class AActor;
class UIGS_CarryableInventoryObject;
class UIGS_SkinHandlerBase;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_CarryableBase : public AIGS_WieldableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SkinHandlerBase* SkinHandler;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_CarryableInventoryObject> CarryableInventoryObject;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<AActor> PickupClassReference;
    
public:
    AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer);

};

