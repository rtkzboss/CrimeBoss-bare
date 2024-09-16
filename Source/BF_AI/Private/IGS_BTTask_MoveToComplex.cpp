#include "IGS_BTTask_MoveToComplex.h"

UIGS_BTTask_MoveToComplex::UIGS_BTTask_MoveToComplex() {
    (*this).LookPosKey.AllowedTypes = {nullptr};
    (*this).AcceptableRadiusKey.AllowedTypes = {nullptr};
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
    (*this).NodeName = TEXT("Move To Complex");
}

