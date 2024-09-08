#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "IGS_VehicleBase.h"
#include "Templates/SubclassOf.h"
#include "VehiclePassengersSpawnedDelegate.h"
#include "IGS_VehicleHeli.generated.h"

class AActor;
class AIGS_RopeActor;
class UAnimMontage;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_VehicleHeli : public AIGS_VehicleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVehiclePassengersSpawned OnPassengerSpawnReady;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AIGS_RopeActor> RopeClass;
    
    UPROPERTY(EditAnywhere)
    float StartBrakingDistance;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ParkingAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* LeavingAnimation;
    
    UPROPERTY(EditAnywhere)
    bool NeedsPassengers;
    
protected:
    UPROPERTY(Replicated)
    bool mR_bCharactersSpawned;
    
    UPROPERTY(Replicated)
    FVector_NetQuantize mR_TargetPosition;
    
    UPROPERTY(Replicated)
    FVector_NetQuantize mR_TargetLookAtPosition;
    
    UPROPERTY()
    FVector FinalPosition;
    
    UPROPERTY()
    FRotator FinalRotation;
    
    UPROPERTY()
    FRotator new_rotation;
    
    UPROPERTY()
    FVector new_location;
    
    UPROPERTY()
    TArray<AIGS_RopeActor*> RopeActors;
    
public:
    AIGS_VehicleHeli(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLookAt(AActor* Actor);
    
};

