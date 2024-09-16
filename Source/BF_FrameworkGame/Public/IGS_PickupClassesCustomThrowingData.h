#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PickupClassesCustomThrowingData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PickupClassesCustomThrowingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ThrowForce;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector DropForce;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform SpawnTransform;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropSpawnDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCameraPitch;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnDelay;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnHeightRelative;

    FIGS_PickupClassesCustomThrowingData();
};
