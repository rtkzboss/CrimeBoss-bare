#include "IGS_ScriptActorBase.h"
#include "Engine/EngineTypes.h"

AIGS_ScriptActorBase::AIGS_ScriptActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bReplicates = true;
    auto gen = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
}

void AIGS_ScriptActorBase::Setup(int32 InSeed) {
}

void AIGS_ScriptActorBase::Server_SetupInternal_Implementation() {
}

FRandomStream AIGS_ScriptActorBase::RandomStreamGetter() const {
    return FRandomStream{};
}


UIGS_RandomStreamHolder* AIGS_ScriptActorBase::GetRandomStreamHolder() {
    return nullptr;
}

void AIGS_ScriptActorBase::GetRandomStream(FRandomStream& outRandomStream) {
}

