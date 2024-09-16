#include "BTTask_RequestAnimationTask.h"

UBTTask_RequestAnimationTask::UBTTask_RequestAnimationTask() {
    (*this).MontageTypeBlackBoardKey.AllowedTypes = {nullptr};
    auto gen = TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).MontageTypeBlackBoardKey, 0)) = 255;
    (*this).AnimationCommandKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).AnimationCommandKey, 0)) = 255;
    (*this).bCanBeAborted = true;
    (*this).PlayTimeBlackBoardKey.AllowedTypes = {nullptr};
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).PlayTimeBlackBoardKey, 0)) = 255;
    (*this).NodeName = TEXT("Request Animation Task");
}

