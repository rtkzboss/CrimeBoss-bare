#pragma once
#include "CoreMinimal.h"
#include "META_BaseGoal.h"
#include "Templates/SubclassOf.h"
#include "META_GoalsObjectID.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GoalsObjectID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_BaseGoal>> Goals;

    FMETA_GoalsObjectID();
};
