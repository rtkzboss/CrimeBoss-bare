#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AIMontageBreachVariant.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachTakePosition.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandBreachTakePosition : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandBreachTakePosition();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FinalLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AIMontageBreachVariant MontageVariant;
    
};

