#include "IGS_LocalPlayerVoiceChat.h"
#include "IGS_VoiceChatAudioInputComponent.h"

UIGS_LocalPlayerVoiceChat::UIGS_LocalPlayerVoiceChat() {
    auto gen = CreateDefaultSubobject<UIGS_VoiceChatAudioInputComponent>(TEXT("LocalPlayerVoiceChatInputComponent"));
    (*this).m_WwiseInputComponent = gen;
}

