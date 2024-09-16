#include "IGS_CustomGameUserSettings.h"
#include "IGS_ControllerSettings.h"
#include "IGS_GameSettings.h"
#include "IGS_InputBindSettings.h"
#include "IGS_MouseSettings.h"
#include "IGS_RenderingSettings.h"
#include "IGS_SoundSettings.h"
#include "IGS_TogglesSettings.h"

UIGS_CustomGameUserSettings::UIGS_CustomGameUserSettings() {
    auto gen = CreateDefaultSubobject<UIGS_SoundSettings>(TEXT("SoundSettings"));
    auto gen2 = CreateDefaultSubobject<UIGS_GameSettings>(TEXT("GameSettings"));
    auto gen3 = CreateDefaultSubobject<UIGS_RenderingSettings>(TEXT("RenderingSettings"));
    auto gen4 = CreateDefaultSubobject<UIGS_ControllerSettings>(TEXT("ControllerSettings"));
    auto gen5 = CreateDefaultSubobject<UIGS_TogglesSettings>(TEXT("TogglesSettings"));
    auto gen6 = CreateDefaultSubobject<UIGS_MouseSettings>(TEXT("MouseSettings"));
    auto gen7 = CreateDefaultSubobject<UIGS_InputBindSettings>(TEXT("InputBindSettings"));
    (*this).SoundSettings = gen;
    (*this).GameSettings = gen2;
    (*this).RenderingSettings = gen3;
    (*this).ControllerSettings = gen4;
    (*this).TogglesSettings = gen5;
    (*this).MouseSettings = gen6;
    (*this).InputBindSettings = gen7;
    (*this).ResolutionSizeX = 2560;
    (*this).ResolutionSizeY = 1440;
    (*this).LastUserConfirmedResolutionSizeX = 2560;
    (*this).LastUserConfirmedResolutionSizeY = 1440;
    (*this).LastConfirmedFullscreenMode = 1;
    (*this).Version = 5;
}

UIGS_CustomGameUserSettings* UIGS_CustomGameUserSettings::Instance() {
    return nullptr;
}

