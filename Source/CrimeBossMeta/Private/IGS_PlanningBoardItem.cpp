#include "IGS_PlanningBoardItem.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_PlanningBoardItem::AIGS_PlanningBoardItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collider"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).StaticMeshComponent = gen;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

void AIGS_PlanningBoardItem::SetStatus(EMETA_PlanningBoardItemStatus NewStatus) {
}

void AIGS_PlanningBoardItem::SetItemData(const FMETA_PlanningBoardItemRow& inItemData) {
}


float AIGS_PlanningBoardItem::GetZoomOffset() const {
    return 0.000000000e+00f;
}

FGameplayTag AIGS_PlanningBoardItem::GetId() const {
    return FGameplayTag();
}

TArray<FMETA_PlanningBoardItemConnectionData> AIGS_PlanningBoardItem::GetConnections() const {
    return {};
}

