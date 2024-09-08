#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_DrivableTireComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DrivableTireComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_TireDeflatedEvent);
    
    UPROPERTY(BlueprintAssignable)
    FIGS_TireDeflatedEvent OnTireDeflated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBreakableEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* DeflatedTireMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TireRimRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TireHeightChange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChildHeightChange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* BlowoutAudio;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* BlowoutParticle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector BlowoutOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator BlowoutOrientation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector BlowoutScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, ReplicatedUsing=OnRep_TireDeflated)
    bool mR_IsDeflated;
    
private:
    UPROPERTY()
    AActor* OwnerRef;
    
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    FVector EndLocation;
    
    UPROPERTY(Instanced)
    TArray<USceneComponent*> AttachedComponents;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_BlowoutParticleComponent;
    
public:
    UIGS_DrivableTireComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void TireTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void SetTireAngle(float SpinAngle, float TurnAngle, bool InverseAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakable(bool Enabled);
    
    UFUNCTION()
    void OnRep_TireDeflated();
    
    UFUNCTION(BlueprintCallable)
    bool IsBreakable();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_StartDeflate(bool inDropin);
    
};

