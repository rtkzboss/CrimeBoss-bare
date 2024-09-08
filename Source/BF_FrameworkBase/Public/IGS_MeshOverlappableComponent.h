#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_OnMeshProjectileOverlapDelegate.h"
#include "IGS_ProjectileOverlappable.h"
#include "IGS_MeshOverlappableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_MeshOverlappableComponent : public UStaticMeshComponent, public IIGS_ProjectileOverlappable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnMeshProjectileOverlap OnProjectileOverlapEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_OverlapResponseType OverlappableType;
    
    UIGS_MeshOverlappableComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

