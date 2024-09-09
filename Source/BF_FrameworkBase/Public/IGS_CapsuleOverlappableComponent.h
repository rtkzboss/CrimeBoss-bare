#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_OnCapsuleProjectileOverlapDelegate.h"
#include "IGS_ProjectileOverlappable.h"
#include "IGS_CapsuleOverlappableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CapsuleOverlappableComponent : public UCapsuleComponent, public IIGS_ProjectileOverlappable {
    GENERATED_BODY()
public:
    UIGS_CapsuleOverlappableComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnCapsuleProjectileOverlap OnProjectileOverlapEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_OverlapResponseType OverlappableType;
    

    // Fix for true pure virtual functions not being implemented
};

