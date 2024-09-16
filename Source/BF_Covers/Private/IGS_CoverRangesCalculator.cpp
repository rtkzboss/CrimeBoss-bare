#include "IGS_CoverRangesCalculator.h"

AIGS_CoverRangesCalculator::AIGS_CoverRangesCalculator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_CoverRangesCalculator::TestCompute(UWorld* InWorld) {
}

void AIGS_CoverRangesCalculator::LoadCoverRanges(UWorld* InWorld, AActor* inLSA, FName inVariantName) {
}

TArray<FIGS_CoverPointDataHolder> AIGS_CoverRangesCalculator::GetCoverPointDataHolders(UWorld* InWorld, bool inUseCoverZones, bool inDebugDraw) {
    return {};
}

