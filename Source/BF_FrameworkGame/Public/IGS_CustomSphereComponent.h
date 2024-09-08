#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "IGS_CustomSphereComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bVisibleTroughWalls: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float LineThickness;
    
public:
    UIGS_CustomSphereComponent(const FObjectInitializer& ObjectInitializer);

};

