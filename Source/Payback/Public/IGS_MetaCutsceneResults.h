#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_MetaCutsceneResults.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText DebugText;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Result;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag ResultTag;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool HideLevel;

    FIGS_MetaCutsceneResults();
};
