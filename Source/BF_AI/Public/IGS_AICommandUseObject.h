#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandUseObject.generated.h"

class AActor;

UCLASS()
class BF_AI_API UIGS_AICommandUseObject : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandUseObject();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ObjectToUse;

};
