#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneConditionSetup.generated.h"

class UIGS_MetaCutsceneConditionExecuter;
class UObject;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneConditionSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_MetaCutsceneConditionExecuter* ConditionExecuter;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UObject* MetaCondition;

    FIGS_MetaCutsceneConditionSetup();
};
