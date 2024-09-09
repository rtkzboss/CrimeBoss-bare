#pragma once
#include "CoreMinimal.h"
#include "IGS_PropLogicComponent.h"
#include "IGS_ManualPropLogicComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIGS_ManualPropLogicComponent : public UIGS_PropLogicComponent {
    GENERATED_BODY()
public:
    UIGS_ManualPropLogicComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    bool bGenerateAutomatically;
    
};

