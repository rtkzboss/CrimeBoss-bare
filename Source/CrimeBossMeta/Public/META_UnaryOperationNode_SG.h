#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_UnaryOperation.h"
#include "META_BaseNode_SG.h"
#include "META_UnaryOperationNode_SG.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_UnaryOperationNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_UnaryOperation UnaryOperation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag GraphVariable;
    
    UMETA_UnaryOperationNode_SG();

};

