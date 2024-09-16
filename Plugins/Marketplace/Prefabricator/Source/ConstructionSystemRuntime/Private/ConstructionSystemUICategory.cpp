#include "ConstructionSystemUICategory.h"

FConstructionSystemUICategory::FConstructionSystemUICategory() {
    (*this).DisplayName = FText::GetEmpty();
    (*this).Icon = nullptr;
    (*this).PrefabEntries = {};
}
