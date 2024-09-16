#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_PlanningBoardItemConnectionData.h"
#include "META_PlanningBoardMission.h"
#include "META_PlanningBoardItemRow.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlanningBoardItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsVisualOnly;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag AudioMessageTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMETA_PlanningBoardMission> Missions;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMETA_PlanningBoardItemConnectionData> Connections;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PositionX;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PositionY;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZoomOffset;

    FMETA_PlanningBoardItemRow();
};
