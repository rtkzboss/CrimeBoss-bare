#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_WaypointBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WaypointManager.generated.h"

class AIGS_SmartObjectSimpleBase;

UCLASS(BlueprintType)
class BF_AI_API UIGS_WaypointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_WaypointManager();

    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsOfClassInBoxWithTransform(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass, const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsOfClassInBox(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass, FVector inOrigin, FVector InBoxExtent) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsOfClass(const TSubclassOf<AIGS_WaypointBase>& inWaypointClass) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypointsInBox(FVector inOrigin, FVector InBoxExtent) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllWaypoints() const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_SmartObjectSimpleBase*> GetAllSimpleSmartObjectsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;

protected:
    UPROPERTY(Transient)
    TArray<AIGS_WaypointBase*> Waypoints;

    UPROPERTY(Transient)
    TArray<AIGS_SmartObjectSimpleBase*> SimpleSmartObjects;

};
