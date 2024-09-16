#include "IGS_Ladder.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_LadderInteractiveComponent.h"

AIGS_Ladder::AIGS_Ladder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerSnappingPoint"));
    auto gen2 = CreateDefaultSubobject<UIGS_LadderInteractiveComponent>(TEXT("LadderTopInteractiveComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_LadderInteractiveComponent>(TEXT("LadderBottomInteractiveComponent"));
    auto gen4 = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).PlayerSnappingPoint = gen;
    (*this).HandAlignLocationOffset = 4.600000000e+01f;
    (*this).FirstTopStepOffset = 1.100000000e+01f;
    (*this).StepsSpacing = 8.000000000e+01f;
    (*this).BottomRungLocalZ = 8.000000000e+01f;
    (*this).AIGetOutUpOffset = -1.735000000e+02f;
    (*this).LadderTopInteractiveComponent = gen2;
    (*this).LadderBottomInteractiveComponent = gen3;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen4;
    if (gen) gen->SetupAttachment(gen4);
    if (gen2) gen2->SetupAttachment(gen4);
    if (gen3) gen3->SetupAttachment(gen4);
}

