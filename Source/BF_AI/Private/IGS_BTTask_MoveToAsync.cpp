#include "IGS_BTTask_MoveToAsync.h"

UIGS_BTTask_MoveToAsync::UIGS_BTTask_MoveToAsync() {
    (*this).bUseHierarchicalPathfinding = true;
    (*this).BlackboardKey.AllowedTypes = {nullptr, nullptr};
}

