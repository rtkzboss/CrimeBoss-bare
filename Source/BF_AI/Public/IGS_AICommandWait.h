#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandWait.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandWait : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandWait();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_InterestPointHolder LookAt;
    
};

