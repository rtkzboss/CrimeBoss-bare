#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointBase.h"
#include "IGS_PatrolGroup.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class AIGS_PatrolPoint;
class AIGS_WaypointFramework;
class UIGS_AICommand;

UCLASS(Abstract, Config=Inherit)
class BF_AI_API AIGS_PatrolGroup : public AIGS_WaypointBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AIGS_PatrolPoint*> PatrolPoints_DEPRECATED;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AIGS_WaypointFramework*> Waypoints;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AIGS_WaypointBase*> WaypointsCasted;
    
    AIGS_PatrolGroup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWaitFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AIGS_WaypointBase* GetPatrolPoint(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointBase*> GetAllVisitablePoints(AIGS_GameCharacterFramework* inCharacter) const;
    
};

