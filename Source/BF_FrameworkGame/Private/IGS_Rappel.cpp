#include "IGS_Rappel.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_RappelInteractiveComponent.h"

AIGS_Rappel::AIGS_Rappel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_RappelInteractiveComponent>(TEXT("RappelTopInteractiveComponent"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).StartLocation.X = 6.000000000e+01f;
    (*this).StartLocation.Z = 2.000000000e+02f;
    (*this).EndLocation.X = 6.000000000e+01f;
    (*this).EndLocation.Z = -1.000000000e+02f;
    (*this).RappelTopInteractiveComponent = gen;
    (*this).ShouldRotateView = true;
    (*this).bReplicates = true;
    auto gen3 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

void AIGS_Rappel::SetEnabled(bool inEnabled) const {
}

bool AIGS_Rappel::IsEnabled() const {
    return false;
}

