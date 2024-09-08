#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "IGS_DetectorStatusWidgetManager.generated.h"

class AActor;
class AIGS_DetectorBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_DetectorStatusWidgetManager : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AIGS_DetectorBase* DetectorPawn;
    
    UPROPERTY()
    bool IsDetecting;
    
    UPROPERTY()
    EIGS_WalkieTalkieStatus WalkieTalkieStatus;
    
    UPROPERTY()
    AActor* Target;
    
public:
    UIGS_DetectorStatusWidgetManager(const FObjectInitializer& ObjectInitializer);

};

