#include "ParameterTags.h"

FParameterTags::FParameterTags() {
    (*this).Tags = TArray<FString>{};
    (*this).ParameterOptions = TMap<FString, FFParameterOptionsTags>{};
}
