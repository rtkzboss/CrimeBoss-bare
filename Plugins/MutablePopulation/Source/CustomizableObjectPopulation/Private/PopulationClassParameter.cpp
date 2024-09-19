#include "PopulationClassParameter.h"

FPopulationClassParameter::FPopulationClassParameter() {
    (*this).Tags = TArray<FString>{};
    (*this).ParameterOptions = TMap<FString, FPopulationClassParameterOptions>{};
}
