#include "BTDecorator_CoverLeanSequence.h"

UBTDecorator_CoverLeanSequence::UBTDecorator_CoverLeanSequence() {
    (*this).UpdateCoverKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Cover Lean Sequence");
}

