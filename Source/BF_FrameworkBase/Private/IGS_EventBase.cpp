#include "IGS_EventBase.h"

UIGS_EventBase::UIGS_EventBase() {
}

FDateTime UIGS_EventBase::GetVisibleFromDate() const {
    return FDateTime{};
}

EIGS_EventState UIGS_EventBase::GetState() const {
    return EIGS_EventState::None;
}

bool UIGS_EventBase::GetShowPopup() const {
    return false;
}

bool UIGS_EventBase::GetIsVisible() const {
    return false;
}

bool UIGS_EventBase::GetIsActive() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UIGS_EventBase::GetImage() const {
    return {};
}

FName UIGS_EventBase::GetId() const {
    return NAME_None;
}

FGameplayTag UIGS_EventBase::GetEventTypeTag() const {
    return FGameplayTag();
}

FDateTime UIGS_EventBase::GetEndsAtDate() const {
    return FDateTime{};
}

FText UIGS_EventBase::GetDisplayName() const {
    return FText::GetEmpty();
}

FText UIGS_EventBase::GetDescription() const {
    return FText::GetEmpty();
}

FDateTime UIGS_EventBase::GetActiveFromDate() const {
    return FDateTime{};
}

