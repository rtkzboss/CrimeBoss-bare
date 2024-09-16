#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "IGS_OnBoxProjectileOverlap.h"
#include "IGS_ProjectileOverlappable.h"
#include "IGS_BoxOverlappableComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_BoxOverlappableComponent : public UBoxComponent, public IIGS_ProjectileOverlappable {
    GENERATED_BODY()
public:
    UIGS_BoxOverlappableComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnBoxProjectileOverlap OnProjectileOverlapEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_OverlapResponseType OverlappableType;


    // Fix for true pure virtual functions not being implemented
};
