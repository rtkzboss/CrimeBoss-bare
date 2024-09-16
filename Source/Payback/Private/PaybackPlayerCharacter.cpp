#include "PaybackPlayerCharacter.h"
#include "IGS_NetworkComponentAnimation.h"
#include "IGS_NetworkComponentCharacter.h"

APaybackPlayerCharacter::APaybackPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    auto gen2 = CreateDefaultSubobject<UIGS_NetworkComponentAnimation>(TEXT("NetworkComponentAnimation"));
    (*this).NetworkCharacter = gen;
    (*this).NetworkAnimation = gen2;
    (*this).NetPriority = 4.000000000e+00f;
}

