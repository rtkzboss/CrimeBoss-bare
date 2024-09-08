#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerEngineer_Base.h"
#include "IGS_AIControllerEngineer_Mechanic.generated.h"

UCLASS(Config=Inherit)
class BF_AI_API AIGS_AIControllerEngineer_Mechanic : public AIGS_AIControllerEngineer_Base {
    GENERATED_BODY()
public:
    AIGS_AIControllerEngineer_Mechanic(const FObjectInitializer& ObjectInitializer);

};

