#include "IGS_TrafficSegment.h"
#include "IGS_TrafficPathComponent.h"

AIGS_TrafficSegment::AIGS_TrafficSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_TrafficPathComponent>(TEXT("UBF_TrafficPathComponent"));
    (*this).PathComponent = gen;
    (*this).RootComponent = gen;
}

