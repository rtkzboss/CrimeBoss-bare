#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficPathComponentFramework.h"
#include "IGS_TrafficPathComponent.generated.h"

class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_TrafficPathComponent : public UIGS_TrafficPathComponentFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VehicleGroups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsBidirectional;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsEdge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForbiddenArea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowCustomColors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY()
    TArray<UObject*> DisableRequests;
    
public:
    UIGS_TrafficPathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

