#include "META_GoalsStatistic.h"
#include "Templates/SubclassOf.h"

FMETA_GoalsStatistic::FMETA_GoalsStatistic() {
    (*this).FinishedGoalsID = TArray<TSubclassOf<UMETA_BaseGoal>>{};
    (*this).FailedGoalsID = TArray<TSubclassOf<UMETA_BaseGoal>>{};
}
