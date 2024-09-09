#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadControl.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SquadControl : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadControl();

protected:
    UPROPERTY(EditAnywhere)
    float DefendDistance;
    
};

