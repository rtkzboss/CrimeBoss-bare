#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "IGS_CoverPointComponent.generated.h"

class UCoverPoint;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_COVERS_API UIGS_CoverPointComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UIGS_CoverPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DeactivateCoverPoint(bool inForceDeactivate);

    UFUNCTION(BlueprintCallable)
    bool ActivateCoverPoint(bool inForceActivate);

    UPROPERTY(EditAnywhere)
    bool ForceDeactivate;

    UPROPERTY(Instanced, VisibleAnywhere)
    UCoverPoint* CoverPoint;

};
