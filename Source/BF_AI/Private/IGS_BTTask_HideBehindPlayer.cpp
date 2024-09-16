#include "IGS_BTTask_HideBehindPlayer.h"

UIGS_BTTask_HideBehindPlayer::UIGS_BTTask_HideBehindPlayer() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Hide Behind Player");
}

