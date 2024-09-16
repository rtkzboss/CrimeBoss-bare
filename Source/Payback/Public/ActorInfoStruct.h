#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PropActor.h"
#include "Templates/SubclassOf.h"
#include "ActorInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FActorInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_PropActor> ActorSpawnerComponent;

    UPROPERTY(EditAnywhere)
    bool bEnableTransformOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;

    PAYBACK_API FActorInfoStruct();
};
