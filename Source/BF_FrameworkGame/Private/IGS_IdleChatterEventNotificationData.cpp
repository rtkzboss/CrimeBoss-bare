#include "IGS_IdleChatterEventNotificationData.h"

FIGS_IdleChatterEventNotificationData::FIGS_IdleChatterEventNotificationData() {
    (*this).AsyncRequest = nullptr;
    (*this).Characters = TArray<AIGS_GameCharacterFramework*>{};
}
