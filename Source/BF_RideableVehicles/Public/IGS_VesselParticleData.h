#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VesselParticleData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_VesselParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsUnder;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 PontoonIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PontoonLocation;

    BF_RIDEABLEVEHICLES_API FIGS_VesselParticleData();
};
