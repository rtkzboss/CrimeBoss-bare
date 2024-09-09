#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleCar.h"
#include "IGS_PoliceVehicle.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Abstract)
class BF_AI_API AIGS_PoliceVehicle : public AIGS_VehicleCar {
    GENERATED_BODY()
public:
    AIGS_PoliceVehicle(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* PoliceSirenAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkRtpc* PoliceSirenAkRtpc;
    
};

