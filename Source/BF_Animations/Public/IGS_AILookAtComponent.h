#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_AILookAtComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_ANIMATIONS_API UIGS_AILookAtComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AILookAtComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLookAtWeight(float HorizontalWeight, float VerticalWeight, float Smoothness);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTarget(AActor* LookAtTarget);
    
    UFUNCTION(BlueprintPure)
    AActor* GetLookAtTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtTarget(float& OutHorizontalWeight, float& OutVerticalWeight, float& OutSmoothness) const;
    
};

