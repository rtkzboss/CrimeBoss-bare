#include "IGS_MonsterCloset.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_MonsterCloset::AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    auto gen2 = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).helpersBox = gen;
    (*this).MaxDistanceToPlayableArea = 3.000000000e+03f;
    (*this).DistanceToPlayableArea = -1.000000000e+00f;
    (*this).ApproxPlayableAreaEntry.X = 3.402823466e+38f;
    (*this).ApproxPlayableAreaEntry.Y = 3.402823466e+38f;
    (*this).ApproxPlayableAreaEntry.Z = 3.402823466e+38f;
    (*this).CheckValidityInRuntime = true;
    (*this).RootComponent = gen2;
    if (gen) gen->SetupAttachment(gen2);
}

