#include "IGS_TestRunnerSettings.h"

UIGS_TestRunnerSettings::UIGS_TestRunnerSettings() {
    auto& gen0 = (*this).PriorityMapsToTest;
    gen0.Empty();
    gen0.AddDefaulted(3);
}


