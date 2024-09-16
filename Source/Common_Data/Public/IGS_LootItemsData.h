#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_LootSize.h"
#include "IGS_GenericItemsData.h"
#include "IGS_LootItemsData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_LootItemsData : public FIGS_GenericItemsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_LootSize LootSize;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SmallHits;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag LootCategoryTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StandMesh;

    FIGS_LootItemsData();
};
