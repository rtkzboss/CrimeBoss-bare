#include "DeathAnimations.h"

FDeathAnimations::FDeathAnimations() {
    (*this).DeathFront = TArray<TSoftObjectPtr<UAnimSequence>>{};
    (*this).DeathBack = TArray<TSoftObjectPtr<UAnimSequence>>{};
    (*this).DeathLeft = TArray<TSoftObjectPtr<UAnimSequence>>{};
    (*this).DeatRight = TArray<TSoftObjectPtr<UAnimSequence>>{};
}
