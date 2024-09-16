#include "IGS_BTTask_ThrowThrowableAICommand.h"

UIGS_BTTask_ThrowThrowableAICommand::UIGS_BTTask_ThrowThrowableAICommand() {
    (*this).BlackboardKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).BlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Throwable - AI Command");
}

