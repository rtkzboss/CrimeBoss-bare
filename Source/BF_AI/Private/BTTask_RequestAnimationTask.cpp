#include "BTTask_RequestAnimationTask.h"
#include "IGS_AICommand.h"

UBTTask_RequestAnimationTask::UBTTask_RequestAnimationTask() {
    FBlackboardKeySelector gen;
    gen.AddNameFilter(this, TEXT("MontageTypeBlackBoardKey"));
    (*this).MontageTypeBlackBoardKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("AnimationCommandKey_Object_2147482493"), UIGS_AICommand::StaticClass());
    (*this).AnimationCommandKey = gen2;
    (*this).bCanBeAborted = true;
    FBlackboardKeySelector gen3;
    gen3.AddFloatFilter(this, TEXT("PlayTimeBlackBoardKey"));
    (*this).PlayTimeBlackBoardKey = gen3;
    (*this).NodeName = TEXT("Request Animation Task");
}

