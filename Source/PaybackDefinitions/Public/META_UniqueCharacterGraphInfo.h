#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_UniqueCharacterLoadoutFromGraph.h"
#include "META_UniqueCharacterGraphInfo.generated.h"

class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct FMETA_UniqueCharacterGraphInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> Graph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UnlockTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMETA_UniqueCharacterLoadoutFromGraph LoadoutOverride;

    PAYBACKDEFINITIONS_API FMETA_UniqueCharacterGraphInfo();
};
