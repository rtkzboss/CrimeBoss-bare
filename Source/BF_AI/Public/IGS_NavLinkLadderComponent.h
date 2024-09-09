#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkComponentBase.h"
#include "IGS_NavLinkLadderComponent.generated.h"

class UAnimMontage;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkLadderComponent : public UIGS_NavLinkComponentBase {
    GENERATED_BODY()
public:
    UIGS_NavLinkLadderComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FromBottomAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FromTopAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* SlideAnimation;
    
};

