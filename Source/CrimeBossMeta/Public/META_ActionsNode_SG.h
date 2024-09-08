#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_ActionsNode_SG.generated.h"

class UMETA_BaseAction;

UCLASS()
class CRIMEBOSSMETA_API UMETA_ActionsNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UMETA_BaseAction*> Actions;
    
    UMETA_ActionsNode_SG();

};

