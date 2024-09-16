#include "DelayedCommand.h"

FDelayedCommand::FDelayedCommand() {
    auto gen = TBaseStructure<FTimerHandle>::Get()->FindPropertyByName("Handle");
    (*gen->ContainerPtrToValuePtr<uint64>(&(*this).Timer, 0)) = 0;
    (*this).AICommand = nullptr;
}
