#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerThrower_Base.h"
#include "IGS_AIControllerThrower_Cleaner.generated.h"

UCLASS(Config=Inherit)
class BF_AI_API AIGS_AIControllerThrower_Cleaner : public AIGS_AIControllerThrower_Base {
    GENERATED_BODY()
public:
    AIGS_AIControllerThrower_Cleaner(const FObjectInitializer& ObjectInitializer);

};

