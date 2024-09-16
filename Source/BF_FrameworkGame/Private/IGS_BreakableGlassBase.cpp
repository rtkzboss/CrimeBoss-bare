#include "IGS_BreakableGlassBase.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_BreakableGlassBase::AIGS_BreakableGlassBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).Root = gen;
    (*this).GlassPanelPreset = EIGS_GlassRegularPreset::Panel_200X105;
    (*this).ScaleUniform = 1.000000000e+00f;
    (*this).ScaleY = 1.000000000e+00f;
    (*this).ScaleZ = 1.000000000e+00f;
    (*this).bReplicates = true;
    auto gen2 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen;
}

