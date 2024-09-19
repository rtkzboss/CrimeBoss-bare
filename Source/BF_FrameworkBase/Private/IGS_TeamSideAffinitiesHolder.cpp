#include "IGS_TeamSideAffinitiesHolder.h"

FIGS_TeamSideAffinitiesHolder::FIGS_TeamSideAffinitiesHolder() {
    (*this).EnemySides = TArray<EIGS_TeamSideEnum>{};
    (*this).FriendlySides = TArray<EIGS_TeamSideEnum>{};
}
