#include "IGS_BTTask_GetOutOfAgent.h"

UIGS_BTTask_GetOutOfAgent::UIGS_BTTask_GetOutOfAgent() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Get Out Of Agent");
}

