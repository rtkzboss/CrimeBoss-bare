#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadBreachStackUp.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SquadBreachStackUp : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadBreachStackUp();

    UPROPERTY(EditAnywhere)
    bool IsInfinate;

};
