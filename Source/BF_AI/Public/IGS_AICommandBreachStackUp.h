#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachStackUp.generated.h"

class AActor;

UCLASS()
class BF_AI_API UIGS_AICommandBreachStackUp : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector StackPos;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Brechable;
    
    UPROPERTY(BlueprintReadOnly)
    bool Breaching;
    
    UPROPERTY(BlueprintReadOnly)
    bool Crouch;
    
    UIGS_AICommandBreachStackUp();

};

