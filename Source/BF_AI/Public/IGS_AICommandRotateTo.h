#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandRotateTo.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandRotateTo : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandRotateTo();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_InterestPointHolder LookAt;
    
};

