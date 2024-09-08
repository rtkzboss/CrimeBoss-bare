#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadScripted.generated.h"

UCLASS()
class BF_AI_API UIGS_BTTask_SquadScripted : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DefendDistance;
    
public:
    UIGS_BTTask_SquadScripted();

};

