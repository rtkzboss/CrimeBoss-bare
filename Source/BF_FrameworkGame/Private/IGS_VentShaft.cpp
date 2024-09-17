#include "IGS_VentShaft.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_VentShaftInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VentShaft::AIGS_VentShaft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_VentShaftInteractiveComponent>(TEXT("VentShaftEnterInteractiveComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_VentShaftInteractiveComponent>(TEXT("VentShaftExitInteractiveComponent"));
    auto gen3 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBlocker"));
    auto gen4 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTrigger"));
    auto gen5 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).VentShaftEnterInteractiveComponent = gen;
    (*this).VentShaftExitInteractiveComponent = gen2;
    (*this).BoxBlocker = gen3;
    (*this).BoxTrigger = gen4;
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen5;
    if (gen) gen->SetupAttachment(gen5);
    if (gen2) gen2->SetupAttachment(gen5);
    if (gen3) gen3->SetupAttachment(gen5);
    if (gen4) gen4->SetupAttachment(gen5);
}

void AIGS_VentShaft::OnTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_VentShaft::OnTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_VentShaft::OnRep_IsOpened() const {
}

void AIGS_VentShaft::OnCoverUsed(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_VentShaft::OnBlockerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_VentShaft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_VentShaft, IsOpened);
}

