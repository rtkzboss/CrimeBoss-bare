#include "PropGroupCode.h"

APropGroupCode::APropGroupCode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}

