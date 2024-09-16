#include "IGS_NavLinkGroupBase.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

ADEPRECATED_IGS_NavLinkGroupBase::ADEPRECATED_IGS_NavLinkGroupBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("GroupRootComponent"));
    auto gen2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    auto gen3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    auto gen4 = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    (*this).NavLinkCount = 1;
    (*this).LinksDistance = 1.000000000e+00f;
    (*this).Left.X = -1.000000000e+02f;
    (*this).Right.X = 1.000000000e+02f;
    (*this).GroupRootComponent = gen;
    (*this).FrontBreachingPoints = gen2;
    (*this).BackBreachingPoints = gen3;
    (*this).helpersBox = gen4;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
    if (gen4) gen4->SetupAttachment(gen);
}

void ADEPRECATED_IGS_NavLinkGroupBase::SetEnableArea(TSubclassOf<UNavArea> NavArea) {
}

void ADEPRECATED_IGS_NavLinkGroupBase::SetDisableArea(TSubclassOf<UNavArea> NavArea) {
}

