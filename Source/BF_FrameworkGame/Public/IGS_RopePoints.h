#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RopePoints.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RopePoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName LeftHandSocketName;

    UPROPERTY(EditAnywhere)
    FName RightHandSocketName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxRightHandIndexOffset;

    UPROPERTY(EditAnywhere)
    FVector LeftHandPointOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LeftHandPointIndexOffset;

    UPROPERTY(EditAnywhere)
    int32 EndParticleCollisionIndicies;

    UPROPERTY(EditAnywhere)
    float CollisionDistanceFromTheGround;

    BF_FRAMEWORKGAME_API FIGS_RopePoints();
};
