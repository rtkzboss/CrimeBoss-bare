#pragma once
#include "CoreMinimal.h"
#include "EIGS_SmartLinkAnimVariant.h"
#include "IGS_NavLinkComponentBase.h"
#include "IGS_NavLinkComponent.generated.h"

class UAnimMontage;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkComponent : public UIGS_NavLinkComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SmartLinkAnimVariant CommonAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SmartLinkAnimVariant LeftAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeftAnimationAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SmartLinkAnimVariant RightAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* RightAnimationAsset;
    
    UIGS_NavLinkComponent(const FObjectInitializer& ObjectInitializer);

};

