#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IGS_NetProjectileHitResult.generated.h"

class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT()
struct FIGS_NetProjectileHitResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize TraceStart;

    UPROPERTY()
    FVector_NetQuantize TraceEnd;

    UPROPERTY()
    FVector_NetQuantize ImpactPointOffset;

    UPROPERTY()
    FVector_NetQuantizeNormal ImpactNormal;

    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;

    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;

    UPROPERTY()
    TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;

    UPROPERTY()
    FName BoneName;

    UPROPERTY()
    float Distance;

    UPROPERTY()
    uint8 bBlockingHit: 1;

    UPROPERTY()
    uint8 bIsPenetratingHit: 1;

    BF_NETWORK_API FIGS_NetProjectileHitResult();
};
