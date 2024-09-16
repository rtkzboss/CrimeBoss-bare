#include "IGS_ScreenSwitchManager.h"

UIGS_ScreenSwitchManager::UIGS_ScreenSwitchManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_ScreenSwitchManager::TriggerAdditionalAction(UObject* inWCO) {
}





void UIGS_ScreenSwitchManager::RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag) {
}

UIGS_ScreenSwitchManager* UIGS_ScreenSwitchManager::Instance(UObject* inWCO) {
    return nullptr;
}

void UIGS_ScreenSwitchManager::GoBack(UObject* inWCO) {
}

void UIGS_ScreenSwitchManager::Confirm(UObject* inWCO) {
}

