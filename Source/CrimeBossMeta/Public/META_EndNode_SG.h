#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_BaseNode_SG.h"
#include "META_EndNode_SG.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_EndNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_EndNode_SG();

    UPROPERTY(EditDefaultsOnly)
    EMETA_GoalStatus Result;

    UPROPERTY(VisibleDefaultsOnly)
    bool bShouldWaitUntilAllInnerGraphsBeFinished;

};
