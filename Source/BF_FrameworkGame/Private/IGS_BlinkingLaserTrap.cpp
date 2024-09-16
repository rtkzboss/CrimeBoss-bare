#include "IGS_BlinkingLaserTrap.h"
#include "Components/TimelineComponent.h"

AIGS_BlinkingLaserTrap::AIGS_BlinkingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UTimelineComponent>(TEXT("BlinkTimeline"));
    (*this).BlinkTimeline = gen;
    (*this).m_LoopTime = 1.000000000e+01f;
    (*this).ChargeAfterLaserOnNum = 3.000000000e+00f;
}

void AIGS_BlinkingLaserTrap::OnBlinkOnTimeline() {
}

void AIGS_BlinkingLaserTrap::OnBlinkOffTimeline() {
}

void AIGS_BlinkingLaserTrap::Client_StopBlinkingTimeline_Implementation() const {
}

void AIGS_BlinkingLaserTrap::Client_PlayBlinkingTimeline_Implementation() const {
}

