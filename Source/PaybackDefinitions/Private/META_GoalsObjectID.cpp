#include "META_GoalsObjectID.h"
#include "Templates/SubclassOf.h"

FMETA_GoalsObjectID::FMETA_GoalsObjectID() {
    (*this).Goals = TArray<TSubclassOf<UMETA_BaseGoal>>{};
}
