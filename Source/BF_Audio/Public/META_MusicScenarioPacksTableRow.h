#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_MusicScenarioPacksTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_AUDIO_API FMETA_MusicScenarioPacksTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ScenarioID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag MusicCollectionID;

    FMETA_MusicScenarioPacksTableRow();
};
