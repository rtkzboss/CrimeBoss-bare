#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_CallbackNode_SG.generated.h"

class UMETA_BaseCallback;

UCLASS()
class CRIMEBOSSMETA_API UMETA_CallbackNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_CallbackNode_SG();

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UMETA_BaseCallback* CallbackObject;

};
