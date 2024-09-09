#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_VehicleDestinationAreaPointComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_VehicleDestinationAreaPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_VehicleDestinationAreaPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNewVisibility(bool Hidden);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsEnabled;
    
};

