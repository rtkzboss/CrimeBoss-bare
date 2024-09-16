#pragma once
#include "CoreMinimal.h"
#include "ActorInfoStruct.h"
#include "PropActorInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropActorInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PivotVariationMax;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActorInfoStruct> ActorsToSpawn;

    PAYBACK_API FPropActorInfoStruct();
};
