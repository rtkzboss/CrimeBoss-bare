#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_SequencePriority.h"
#include "META_SequenceItem.h"
#include "META_Sequence.generated.h"

USTRUCT(BlueprintType)
struct FMETA_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_SequenceItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_SequencePriority Priority;
    
    CRIMEBOSSMETA_API FMETA_Sequence();
};

