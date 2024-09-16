#include "IGS_Streaming_LevelScriptActor.h"

AIGS_Streaming_LevelScriptActor::AIGS_Streaming_LevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bRegenerateRoomNavmesh = true;
    (*this).bUpdateLevelGenerator_Default = true;
}

void AIGS_Streaming_LevelScriptActor::LevelGenerationFinished() const {
}

