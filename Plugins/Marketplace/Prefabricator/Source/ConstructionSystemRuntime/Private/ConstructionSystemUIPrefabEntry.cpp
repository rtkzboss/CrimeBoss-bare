#include "ConstructionSystemUIPrefabEntry.h"

FConstructionSystemUIPrefabEntry::FConstructionSystemUIPrefabEntry() {
    (*this).DisplayName = FText::GetEmpty();
    (*this).Tooltip = FText::GetEmpty();
    (*this).Icon = nullptr;
    (*this).Prefab = nullptr;
}
