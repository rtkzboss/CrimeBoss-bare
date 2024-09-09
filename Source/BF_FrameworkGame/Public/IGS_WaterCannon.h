#pragma once
#include "CoreMinimal.h"
#include "IGS_MountedWeapon.h"
#include "InteractedWithWaterTurretDelegate.h"
#include "IGS_WaterCannon.generated.h"

class AIGS_HoseSegmentBase;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_WaterCannon : public AIGS_MountedWeapon {
    GENERATED_BODY()
public:
    AIGS_WaterCannon(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void RemoveUnusedTurrets_MULTICAST();
    
    UFUNCTION(NetMulticast, Reliable)
    void MakeVisible_MULTICAST();
    
    UFUNCTION(Reliable, Server)
    void CheckItemAndMakeVisible_SERVER();
    
public:
    UPROPERTY(BlueprintAssignable)
    FInteractedWithWaterTurret InteractedWithWaterTurret;
    
    UPROPERTY()
    AIGS_HoseSegmentBase* WaterHoseObject;
    
    UPROPERTY()
    int32 TurretID;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool IsItemInInventory;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

