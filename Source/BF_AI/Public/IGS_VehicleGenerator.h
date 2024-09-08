#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleGenerator.generated.h"

class AIGS_TrafficSegment;
class AIGS_VehicleBase;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_VehicleGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FColor> PossibleColors;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AIGS_VehicleBase>> PossibleVehicles;
    
    UPROPERTY(EditAnywhere)
    TArray<AIGS_TrafficSegment*> PossiblePaths;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FirstDelayInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnFrequencyMinRangeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnFrequencyMaxRangeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseMaxSpeedRandomizer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarMaxSpeedMaxRangeValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarMaxSpeedMinRangeValue;
    
public:
    AIGS_VehicleGenerator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnVehicleDriveFinished(AIGS_VehicleBase* inVehicle);
    
    UFUNCTION()
    void OnAlarmed(EIGS_AlarmReason inReason);
    
};

