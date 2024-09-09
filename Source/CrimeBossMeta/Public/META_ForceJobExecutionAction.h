#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobForceResult.h"
#include "META_BaseAction.h"
#include "META_ForceJobExecutionAction.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_ForceJobExecutionAction : public UMETA_BaseAction {
    GENERATED_BODY()
public:
    UMETA_ForceJobExecutionAction();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_JobForceResult ForcedJobResultFromUI;
    
};

