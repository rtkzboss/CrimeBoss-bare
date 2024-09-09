#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "IGS_VehicleSpawner.h"
#include "IGS_PoliceVehicleSpawner.generated.h"

UCLASS()
class BF_AI_API AIGS_PoliceVehicleSpawner : public AIGS_VehicleSpawner {
    GENERATED_BODY()
public:
    AIGS_PoliceVehicleSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnAlarmed(EIGS_AlarmReason inReason);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnAfterAlarmed;
    
};

