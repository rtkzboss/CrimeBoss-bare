#pragma once
#include "CoreMinimal.h"
#include "META_BaseGoal.h"
#include "Templates/SubclassOf.h"
#include "META_GoalsObjectIDCounter.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GoalsObjectIDCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_BaseGoal> GoalID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Counter;

    FMETA_GoalsObjectIDCounter();
};
