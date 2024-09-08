#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "InteractedWithWaterHoseDelegate.h"
#include "Templates/SubclassOf.h"
#include "WaterHoseState.h"
#include "WaterTurretElements.h"
#include "IGS_HoseSegmentBase.generated.h"

class AIGS_WaterCannon;
class UIGS_GlobalInventoryObject;
class UIGS_InteractiveComponent;
class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_HoseSegmentBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractedWithWaterHose InteractedWithWaterHose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* SegmentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InteractionText;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FWaterTurretElements> AllWaterTurretsArr;
    
    UPROPERTY()
    FWaterTurretElements SingleWaterTurret;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* BoxOnTheWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_WaterCannon> WaterCannonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetForTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_GlobalInventoryObject> WaterHose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* HighlightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideTurretMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> TurretMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideHosetMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> HosetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfPlaceOption;
    
protected:
    UPROPERTY()
    TSubclassOf<AIGS_WaterCannon> OldWaterCannonClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SegmentLength;
    
    UPROPERTY(BlueprintReadOnly)
    FVector SegmentStartLocation;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> SegmentsEndLocationArray;
    
    UPROPERTY(ReplicatedUsing=OnRep_ViewState)
    WaterHoseState mR_ViewState;
    
public:
    AIGS_HoseSegmentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartInteraction_SERVER();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StartInteraction_MULTICAST();
    
    UFUNCTION()
    void SpawnWaterCannon(FVector Loc, FRotator Rot);
    
    UFUNCTION()
    void OnRep_ViewState();
    
};

