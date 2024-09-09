#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_BreakableMeshComponent.h"
#include "IGS_GlassInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_BreakableWindowComponent.generated.h"

class AActor;
class AIGS_AcousticPortal;
class UCameraShakeBase;
class UPrimitiveComponent;
class USkinnedDecalSampler;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BreakableWindowComponent : public UIGS_BreakableMeshComponent, public IIGS_GlassInterface {
    GENERATED_BODY()
public:
    UIGS_BreakableWindowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void RefreshDecalData(int32 inDecalIndex, FVector inDecalLocation, FVector inDecalRotation);
    
    UFUNCTION()
    void OnRep_SynchronizeDecals();
    
    UFUNCTION()
    void OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION()
    void OnComponentBroken_Implementation(AActor* inDmgCauser);
    
    UPROPERTY(Replicated)
    TArray<FVector4> mR_DecalsLocation;
    
    UPROPERTY(Replicated)
    FVector4 mR_RandomDecalRotation;
    
    UPROPERTY(ReplicatedUsing=OnRep_SynchronizeDecals)
    int32 mR_CurrentDecalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinimalDecalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinDecalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxDecalAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ParticleWidth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ParticleHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ParticleAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector ParticleVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShowDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CustomCollisionPreset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanTakePlayerImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bBulletsPassThrough;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<TSubclassOf<UCameraShakeBase>> HitCameraShakes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitCameraShakeIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AIGS_AcousticPortal*> ConnectedAcousticPortals;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USkinnedDecalSampler* SkinnedDecalSampler;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

