#pragma once
#include "CoreMinimal.h"
#include "META_BaseCallback.h"
#include "META_CallbackWithActions.generated.h"

class UMETA_BaseAction;
class UMETA_BaseCondition;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_CallbackWithActions : public UMETA_BaseCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UMETA_BaseCondition*> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UMETA_BaseAction*> TrueActions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UMETA_BaseAction*> FalseActions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 NextNode;
    
public:
    UMETA_CallbackWithActions();

};

