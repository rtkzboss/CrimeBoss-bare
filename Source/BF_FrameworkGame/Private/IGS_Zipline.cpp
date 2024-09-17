#include "IGS_Zipline.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_ZiplineInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Zipline::AIGS_Zipline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_ZiplineInteractiveComponent>(TEXT("ZiplineInteractiveComponent"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).ZiplineInteractiveComponent = gen;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

void AIGS_Zipline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_Zipline, User);
}

