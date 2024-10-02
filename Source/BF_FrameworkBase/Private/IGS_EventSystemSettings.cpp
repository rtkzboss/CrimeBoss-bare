#include "IGS_EventSystemSettings.h"

UIGS_EventSystemSettings::UIGS_EventSystemSettings() {
    (*this).EventsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Events/DT_Events.DT_Events"), TEXT(""));
}

