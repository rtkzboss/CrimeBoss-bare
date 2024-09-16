#include "IGS_MusicPlayer.h"
#include "AkComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_MusicPlayer::AIGS_MusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    auto gen2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).PlayerMesh = gen;
    (*this).AkComponent = gen2;
    (*this).PlayOnStart = true;
    (*this).StopScenicMusicOnStart = true;
    (*this).StopWhenAlarm = true;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
}

void AIGS_MusicPlayer::StopMusic() {
}

void AIGS_MusicPlayer::StartMusic() {
}

void AIGS_MusicPlayer::OnSongDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void AIGS_MusicPlayer::OnRep_PlayerDestroyed() {
}

void AIGS_MusicPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_MusicPlayer, mR_bIsDestroyed);
}

