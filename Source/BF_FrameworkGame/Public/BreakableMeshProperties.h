#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "BreakableMeshProperties.generated.h"

class UAkAudioEvent;
class UMaterialInstance;
class UParticleSystem;
class UPrimitiveComponent;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FBreakableMeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UPrimitiveComponent*> ChainedComponentsToBreak;

    UPROPERTY(VisibleAnywhere)
    bool mR_IsBroken;

    UPROPERTY(VisibleAnywhere)
    bool mR_IsMaterialSwitched;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeBulletDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeMeleeDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeExplosiveDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakeBreachExplosiveDamage;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 HealthToSwitchMaterial;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bSimulatePhysicsOnBreak;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> BreakOtherComponents;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMeshBroken;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* ParticleBreak;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FParticleSysParam> ParticleInstanceParameters;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform ParticleSpawnOffset;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<UMaterialInstance*> MaterialsOnBreak;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AkEventOnBreak;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AkEventOnImpact;

    BF_FRAMEWORKGAME_API FBreakableMeshProperties();
};
