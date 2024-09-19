#include "IGS_BTTask_ThrowThrowableAICommand.h"
#include "IGS_AICommand.h"

UIGS_BTTask_ThrowThrowableAICommand::UIGS_BTTask_ThrowThrowableAICommand() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("BlackboardKey_Object_2147482470"), UIGS_AICommand::StaticClass());
    (*this).BlackboardKey = gen;
    (*this).NodeName = TEXT("Throw Throwable - AI Command");
}

