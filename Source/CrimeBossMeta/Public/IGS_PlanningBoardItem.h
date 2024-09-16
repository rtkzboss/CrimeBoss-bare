#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_PlanningBoardItemConnectionData.h"
#include "META_PlanningBoardItemRow.h"
#include "VirtualCursorTarget.h"
#include "IGS_PlanningBoardItem.generated.h"

class UStaticMeshComponent;

UCLASS()
class CRIMEBOSSMETA_API AIGS_PlanningBoardItem : public AActor, public IVirtualCursorTarget {
    GENERATED_BODY()
public:
    AIGS_PlanningBoardItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStatus(EMETA_PlanningBoardItemStatus NewStatus);

    UFUNCTION(BlueprintCallable)
    void SetItemData(const FMETA_PlanningBoardItemRow& inItemData);

    UFUNCTION(BlueprintImplementableEvent)
    void OnStatusChanged(EMETA_PlanningBoardItemStatus NewStatus);

    UFUNCTION(BlueprintPure)
    float GetZoomOffset() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetId() const;

    UFUNCTION(BlueprintPure)
    TArray<FMETA_PlanningBoardItemConnectionData> GetConnections() const;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FMETA_PlanningBoardItemRow itemData;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EMETA_PlanningBoardItemStatus Status;


    // Fix for true pure virtual functions not being implemented
};
