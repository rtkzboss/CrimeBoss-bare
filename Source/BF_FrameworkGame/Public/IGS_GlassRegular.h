#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileOverlappable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "EGlassShape.h"
#include "EIGS_GlassRegularPreset.h"
#include "IGS_GlassInterface.h"
#include "IGS_RegularGlassState.h"
#include "OnRegularGlassStateChangedDelegate.h"
#include "IGS_GlassRegular.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UBoxComponent;
class UDamageType;
class UIGS_BoxOverlappableComponent;
class UMaterialInstance;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_GlassRegular : public USkeletalMeshComponent, public IIGS_ProjectileOverlappable, public IIGS_GlassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GlassRegularPreset GlassPanelPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleUniform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EGlassShape> GlassShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanGlassEverAffectNavigation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    USkeletalMesh* BaseMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TArray<USkeletalMesh*> BrokenMeshes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* RadialDamageImposter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* AkEventOnImpact;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float VelocityDamageThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float MaxAngularImpulse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float TimeToDestroyGlassShards;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float BreakNormalIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float CellsNormalIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float BreakOpacity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float BreakIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BulletBreakRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BulletBreakHeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FOnRegularGlassStateChanged OnGlassFractured;
    
private:
    UPROPERTY()
    FTransform m_OriginalTransform;
    
    UPROPERTY()
    FBoxSphereBounds m_OriginalBounds;
    
    UPROPERTY(ReplicatedUsing=OnRep_SyncBrokenShards)
    FIGS_RegularGlassState mR_GlassState;
    
    UPROPERTY(Instanced)
    UBoxComponent* m_RamTrigger;
    
    UPROPERTY()
    TArray<FName> m_ShardsToDelete;
    
    UPROPERTY()
    int32 m_ChosenMeshIndex;
    
    UPROPERTY()
    FTimerHandle m_TimerHandle;
    
    UPROPERTY()
    TArray<AActor*> m_ActorsToIgnore;
    
    UPROPERTY()
    float m_PresetScale;
    
    UPROPERTY()
    bool m_bFirstBreakLocal;
    
    UPROPERTY(Instanced)
    UIGS_BoxOverlappableComponent* m_DummyCollision;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_RadialImposterRef;
    
    UPROPERTY(Instanced)
    USceneComponent* m_OriginalAttachParent;
    
    UPROPERTY()
    int32 m_TimesBroken;
    
public:
    UIGS_GlassRegular(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool ShouldCreateImpact() const;
    
protected:
    UFUNCTION()
    void ShatterGlass(FVector inHitPosition, FVector inImpulseStrength, float inObjectRadius, float inObjectHalfHeight);
    
    UFUNCTION()
    void ReAttachToOriginalParent();
    
    UFUNCTION()
    void OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser);
    
    UFUNCTION()
    void OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser);
    
    UFUNCTION()
    void OnRep_SyncBrokenShards();
    
    UFUNCTION()
    void OnComponentOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION()
    void OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION()
    void InitRandomMeshSelection();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION()
    bool HasFractureVelocity(FVector inImpactVelocity, float inNeededVelocity);
    
    UFUNCTION()
    void FirstBreak(FVector inHitPosition, int32 inMeshIndex);
    
    UFUNCTION()
    void ExplodeGlass();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableDummyCollisionAffectingNavigation();
    
protected:
    UFUNCTION()
    void DeleteGlassShards();
    
    UFUNCTION()
    void BreakResponse(FName InParentBone);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void ApplyDamageToGlass(FVector_NetQuantize inHitPosition, FVector_NetQuantize inImpulseStrength, float inObjectRadius, float inObjectHalfHeight, AActor* inInstigator, bool inIsRadialDamage);
    

    // Fix for true pure virtual functions not being implemented
};

