#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointFramework.h"
#include "IGS_WaypointConnector.generated.h"

class AIGS_WaypointBase;
class UIGS_CustomBoxComponent;
class USceneComponent;

UCLASS()
class BF_AI_API AIGS_WaypointConnector : public AIGS_WaypointFramework {
    GENERATED_BODY()
public:
    AIGS_WaypointConnector(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AIGS_WaypointBase* NextPoint;

    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<AIGS_WaypointBase*> BackPointers;

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* Root;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_CustomBoxComponent* BoxComponent;

};
