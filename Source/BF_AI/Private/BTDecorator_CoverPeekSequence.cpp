#include "BTDecorator_CoverPeekSequence.h"

UBTDecorator_CoverPeekSequence::UBTDecorator_CoverPeekSequence() {
    (*this).UpdateCoverKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Cover Peek Sequence");
}

