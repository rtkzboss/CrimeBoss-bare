#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachFight.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandBreachFight : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandBreachFight();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool FromRight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ToWallPoint;
    
};

