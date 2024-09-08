#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_LootCollectionData.generated.h"

class AIGS_LootCollectionBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag PlacementType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag LootCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AIGS_LootCollectionBase> LootCollection;
    
    FIGS_LootCollectionData();
};

