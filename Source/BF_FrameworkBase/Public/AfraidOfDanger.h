#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "AfraidOfDanger.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAfraidOfDanger {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    FGenericTeamId GenericTeamId;
    
    UPROPERTY()
    uint32 DamageTypeFlags;
    
    BF_FRAMEWORKBASE_API FAfraidOfDanger();
};

