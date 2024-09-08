#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AIDetectionComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ShouldFacePlayerOnDetection;
    
    UIGS_AIDetectionComponent(const FObjectInitializer& ObjectInitializer);

};

