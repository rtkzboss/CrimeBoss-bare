#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachIn.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandBreachIn : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Crouch;
    
    UIGS_AICommandBreachIn();

};

