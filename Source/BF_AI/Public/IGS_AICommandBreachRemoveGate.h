#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommandBreachRemoveObstacle.h"
#include "IGS_AICommandBreachRemoveGate.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandBreachRemoveGate : public UIGS_AICommandBreachRemoveObstacle {
    GENERATED_BODY()
public:
    UIGS_AICommandBreachRemoveGate();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtPosition;
    
};

