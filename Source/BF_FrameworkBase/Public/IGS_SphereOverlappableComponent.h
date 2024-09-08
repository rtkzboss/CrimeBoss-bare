#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_OnSphereProjectileOverlapDelegate.h"
#include "IGS_ProjectileOverlappable.h"
#include "IGS_SphereOverlappableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_SphereOverlappableComponent : public USphereComponent, public IIGS_ProjectileOverlappable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSphereProjectileOverlap OnProjectileOverlapEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_OverlapResponseType OverlappableType;
    
    UIGS_SphereOverlappableComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

