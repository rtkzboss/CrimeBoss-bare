#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "IGS_CustomSphereComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UIGS_CustomSphereComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bVisibleTroughWalls: 1;

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float LineThickness;

};
