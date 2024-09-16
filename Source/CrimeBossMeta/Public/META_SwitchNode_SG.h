#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_NeedValueType.h"
#include "META_BaseNode_SG.h"
#include "META_SwitchNode_SG.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_SwitchNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_SwitchNode_SG();

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MinSwitchRange;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxSwitchRange;

    UPROPERTY(BlueprintReadWrite)
    EMETA_NeedValueType NeedValueType;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ConditionGraphVariable;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ConditionGraphTag;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefaultID;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, int32> Cases;

};
