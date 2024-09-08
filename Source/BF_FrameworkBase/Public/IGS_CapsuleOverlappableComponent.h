#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_OnCapsuleProjectileOverlapDelegate.h"
#include "IGS_ProjectileOverlappable.h"
#include "IGS_CapsuleOverlappableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CapsuleOverlappableComponent : public UCapsuleComponent, public IIGS_ProjectileOverlappable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCapsuleProjectileOverlap OnProjectileOverlapEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_OverlapResponseType OverlappableType;
    
    UIGS_CapsuleOverlappableComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

