#include "IGS_ScriptManagerBase.h"

AIGS_ScriptManagerBase::AIGS_ScriptManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ScriptSeed = -1;
}

void AIGS_ScriptManagerBase::SetManagerFinished() {
}




TArray<AIGS_ScriptActorBase*> AIGS_ScriptManagerBase::GetScriptsActorsWithTag(FName inTag) const {
    return {};
}

UIGS_RandomStreamHolder* AIGS_ScriptManagerBase::GetRandomStreamHolder() {
    return nullptr;
}

FRandomStream AIGS_ScriptManagerBase::GetRandomStream_TEMP() {
    return FRandomStream{};
}

void AIGS_ScriptManagerBase::GetRandomStream(FRandomStream& outRandomStream) {
}

