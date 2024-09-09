#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileOverlappable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "EIGS_DamageType.h"
#include "EIGS_GlassPreset.h"
#include "IGS_GlassInterface.h"
#include "IGS_GlassPanelPreset.h"
#include "IGS_GlassStatus.h"
#include "OnTemperedGlassStateChangedDelegate.h"
#include "IGS_GlassTempered.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;
class UStaticMesh;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_GlassTempered : public UStaticMeshComponent, public IIGS_ProjectileOverlappable, public IIGS_GlassInterface {
    GENERATED_BODY()
public:
    UIGS_GlassTempered(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateRenderTarget();
    
    UFUNCTION()
    void Sync_GlassStatus();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMeshes(UStaticMesh* inNewBaseMesh, UStaticMesh* inNewFracturedMesh);
    
    UFUNCTION()
    void PrepRenderTarget();
    
protected:
    UFUNCTION()
    void OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser);
    
    UFUNCTION()
    void OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser);
    
public:
    UFUNCTION()
    void OnRep_GlassStatus();
    
protected:
    UFUNCTION()
    void OnComponentOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION()
    void OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
public:
    UFUNCTION()
    void FractureGlass(FVector inHitLocation, FVector2D inHitUV, float inHoleSize);
    
    UFUNCTION()
    bool CanDoDamage(FVector inHitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void BreakGlass(FVector_NetQuantize10 inHitLocation, FVector_NetQuantizeNormal inFXPushAxis, EIGS_DamageType inDamageType);
    
    UFUNCTION(NetMulticast, Unreliable)
    void ApplyDamageToGlass(FVector_NetQuantize10 inHitLocation, FVector_NetQuantize10 inDamageCauserLocation, EIGS_DamageType inDamageType, float inHoleSize);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GlassPreset GlassPanelPreset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_GlassPreset, FIGS_GlassPanelPreset> GlassPanelPresets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* BaseMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* FracturedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* MaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* ParticleOnBreak;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* ParticleOnFracture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UTexture* StickerTexture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float ShardSpawnRatio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* AkEventOnBreak;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* AkEventOnFracture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* ClearBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* FracturedImpactBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* SaveLastFrameBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float ImpactHoleSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FVector2D HoleSizeRatioClamp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FVector2D RandomHoleRatio;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float DamageMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float VelocityDamageThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    int32 RTWidthAndHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool bKeepCollisionOnDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FOnTemperedGlassStateChanged OnGlassFractured;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FOnTemperedGlassStateChanged OnGlassDestroyed;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_GlassStatus)
    FIGS_GlassStatus mR_GlassStatus;
    
    UPROPERTY()
    UTextureRenderTarget2D* m_HitpointsRT;
    
    UPROPERTY()
    UTextureRenderTarget2D* m_LastFrameRT;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_DynamicFracturedMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_DynamicPaintBrushMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_DynamicSavedFrameMaterial;
    
    UPROPERTY()
    UMaterialInterface* m_OriginalMaterial;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_HitParticle1Ref;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_HitParticle2Ref;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_BreakParticleRef;
    
    UPROPERTY()
    bool m_bIdBrokenLocal;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

