#include "IGS_WaypointConnector.h"
#include "IGS_CustomBoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_WaypointConnector::AIGS_WaypointConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BoxComponent"));
    (*this).Root = gen;
    (*this).BoxComponent = gen2;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

