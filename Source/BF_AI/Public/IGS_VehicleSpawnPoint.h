#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_VehicleDatabaseData.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleSpawnPoint.generated.h"

class AIGS_StaticVehicleBase;
class UArrowComponent;

UCLASS()
class BF_AI_API AIGS_VehicleSpawnPoint : public AActor {
    GENERATED_BODY()
public:
    AIGS_VehicleSpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Server_Spawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Server_RemoveVehicle() const;
    
protected:
    UFUNCTION()
    void OnDebugSubsystemUpdated();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoNotGenerate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UArrowComponent* SpawnPoint;
    
    UPROPERTY(EditInstanceOnly)
    uint8 VehicleGroups;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FColor> CustomColorsPool;
    
    UPROPERTY(EditInstanceOnly)
    TArray<TSoftClassPtr<AIGS_StaticVehicleBase>> CustomVehiclePool;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FIGS_VehicleDatabaseData> CustomVehiclePoolNew;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FColor> PossibleColors;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<AIGS_StaticVehicleBase>> PossibleStaticVehicles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToGenerate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnOnBeginPlay;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AIGS_StaticVehicleBase> PreviewVehicle;
    
    UPROPERTY(Transient)
    AIGS_StaticVehicleBase* SpawnedVehicle;
    
};

