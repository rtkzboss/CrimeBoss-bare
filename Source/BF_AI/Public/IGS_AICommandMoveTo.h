#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandMoveTo.generated.h"

UCLASS()
class BF_AI_API UIGS_AICommandMoveTo : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandMoveTo();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtPoint;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StoppingDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_Speed MovementSpeed;

};
