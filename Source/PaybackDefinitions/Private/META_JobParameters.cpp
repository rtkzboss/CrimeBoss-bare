#include "META_JobParameters.h"

FMETA_JobParameters::FMETA_JobParameters() {
    (*this).ParametersMap = TMap<FGameplayTag, int32>{};
}
