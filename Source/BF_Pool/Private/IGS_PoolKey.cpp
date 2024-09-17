#include "IGS_PoolKey.h"

FIGS_PoolKey::FIGS_PoolKey() {
    (*this).PoolObjectClass = nullptr;
    (*this).PoolTagContainer = FGameplayTagContainer();
}
