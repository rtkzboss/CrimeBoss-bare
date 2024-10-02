#include "IGS_SimpleHitScanShooter.h"

UIGS_SimpleHitScanShooter::UIGS_SimpleHitScanShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TraceChannel = TraceTypeQuery3;
    (*this).ImpactAILoudness = 1.000000000e+00f;
}

void UIGS_SimpleHitScanShooter::Multicast_HandleMiss_Implementation(const FTransform& inShotTransform, const FIGS_NetProjectileHitResult& inFinalHit) {
}

void UIGS_SimpleHitScanShooter::Multicast_HandleHitResults_Implementation(const FTransform& inShotTransform, const TArray<FIGS_NetProjectileHitResult>& inPenetrations, const FIGS_NetProjectileHitResult& inFinalHit) {
}

