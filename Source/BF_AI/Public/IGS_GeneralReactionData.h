#pragma once
#include "CoreMinimal.h"
#include "IGS_GeneralReactionData_Base.h"
#include "Templates/SubclassOf.h"
#include "IGS_GeneralReactionData.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_GeneralReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBehaviorTree* BehaviorTree;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GeneralReactionData_Base> DataAsset;

    FIGS_GeneralReactionData();
};
