#include "IGS_PropGenerator.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_PropLogicComponent.h"

AIGS_PropGenerator::AIGS_PropGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<UIGS_PropLogicComponent>(TEXT("PropLogicComponent"));
    (*this).Root = gen;
    (*this).m_PropLogicComponent = gen2;
    (*this).bReplicates = true;
    auto gen3 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

UIGS_PropLogicComponent* AIGS_PropGenerator::GetLogicComponent() const {
    return nullptr;
}

