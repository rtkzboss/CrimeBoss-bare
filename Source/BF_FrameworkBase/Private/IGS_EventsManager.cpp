#include "IGS_EventsManager.h"

UIGS_EventsManager::UIGS_EventsManager() {
}

void UIGS_EventsManager::UpdateEvents() {
}

void UIGS_EventsManager::OnEventStateChanged_Internal(FName inID, EIGS_EventState inOldState, EIGS_EventState inNewState) {
}

bool UIGS_EventsManager::IsEventVisible(FName inID) const {
    return false;
}

bool UIGS_EventsManager::IsEventActive(FName inID) const {
    return false;
}

TArray<UIGS_EventBase*> UIGS_EventsManager::GetVisibleEvents() const {
    return {};
}

UIGS_EventBase* UIGS_EventsManager::GetEventByID(FName inID) const {
    return nullptr;
}

TArray<UIGS_EventBase*> UIGS_EventsManager::GetAllEvents() const {
    return {};
}

TArray<UIGS_EventBase*> UIGS_EventsManager::GetActiveEvents() const {
    return {};
}

UIGS_EventBase* UIGS_EventsManager::GetActiveEventByTypeTag(FGameplayTag inTypeTag, bool inExactMatch) const {
    return nullptr;
}

