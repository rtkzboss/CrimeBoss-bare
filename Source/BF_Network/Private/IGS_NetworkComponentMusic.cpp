#include "IGS_NetworkComponentMusic.h"
#include "Net/UnrealNetwork.h"

UIGS_NetworkComponentMusic::UIGS_NetworkComponentMusic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).mR_MusicPackIndex = -1;
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_NetworkComponentMusic::OnRep_MusicPackIndex() const {
}

void UIGS_NetworkComponentMusic::OnRep_MusicMissionState() const {
}

void UIGS_NetworkComponentMusic::OnRep_MusicCustomPackName() const {
}

void UIGS_NetworkComponentMusic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_NetworkComponentMusic, mR_MusicMissionState);
    DOREPLIFETIME(UIGS_NetworkComponentMusic, mR_MusicPackIndex);
    DOREPLIFETIME(UIGS_NetworkComponentMusic, mR_MusicCustomPackName);
}

