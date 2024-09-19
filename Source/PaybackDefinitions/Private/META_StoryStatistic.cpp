#include "META_StoryStatistic.h"

FMETA_StoryStatistic::FMETA_StoryStatistic() {
    (*this).PlotlinesFinished = TArray<TSoftObjectPtr<UMETA_BaseStoryGraphManager>>{};
}
