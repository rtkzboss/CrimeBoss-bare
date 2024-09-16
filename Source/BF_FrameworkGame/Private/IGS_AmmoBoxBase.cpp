#include "IGS_AmmoBoxBase.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_AmmoBoxBase::AIGS_AmmoBoxBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("RootComp"))) {
    auto gen = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    (*this).InteractiveComponent = gen;
    (*this).InitialBoxID = EIGS_AmmoBoxItem::BaseLarge;
    (*this).mR_BoxID = EIGS_AmmoBoxItem::BaseLarge;
    auto gen2 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("RootComp")));
    (*this).PickupMeshComp = gen2;
    (*this).SceneRoot = gen2;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

void AIGS_AmmoBoxBase::SetBox(EIGS_AmmoBoxItem inBoxID) {
}

void AIGS_AmmoBoxBase::OnRep_BoxIDChanged() {
}

void AIGS_AmmoBoxBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_AmmoBoxBase, mR_BoxID);
}

