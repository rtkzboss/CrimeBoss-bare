#include "IGS_Quickplay_GameState.h"
#include "IGS_SubtitleManager.h"

AIGS_Quickplay_GameState::AIGS_Quickplay_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager"));
    (*this).SubtitleManager = gen;
}




