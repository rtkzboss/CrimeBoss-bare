#include "IGS_BTTask_MoveToShoutAtCharacter.h"

UIGS_BTTask_MoveToShoutAtCharacter::UIGS_BTTask_MoveToShoutAtCharacter() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Shout At Character");
}

