#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "EIGS_AIMontageBreachVariant.h"
#include "IGS_BreachPointComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BreachPointComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_AIMontageBreachVariant BreachMontageVariant;
    
    UIGS_BreachPointComponent(const FObjectInitializer& ObjectInitializer);

};

