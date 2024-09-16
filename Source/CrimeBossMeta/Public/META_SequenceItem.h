#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_MenuState.h"
#include "META_SequenceItem.generated.h"

USTRUCT(BlueprintType)
struct FMETA_SequenceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_MenuState RequiredMenuState;

    CRIMEBOSSMETA_API FMETA_SequenceItem();
};
