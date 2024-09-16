#include "IGS_AudioSubsystem.h"
#include "IGS_AkVoiceInputComponent.h"
#include "IGS_PersistentAkComponent.h"

UIGS_AudioSubsystem::UIGS_AudioSubsystem() {
    auto gen = CreateDefaultSubobject<UIGS_PersistentAkComponent>(TEXT("PersistentAkComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AkVoiceInputComponent>(TEXT("VoiceInputAkComp"));
    (*this).PersistenAudioAkComponent = gen;
    (*this).VoiceInputComponent = gen2;
}

void UIGS_AudioSubsystem::OnControllerHeadphonesConnectionChanged(bool inIsConnected) {
}

