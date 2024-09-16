#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Engine/NetSerialization.h"
#include "IGS_DeflatableTireComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UCurveFloat;
class UDamageType;
class UIGS_MaskedChassisComponent;
class UMaterialInterface;
class UParticleSystem;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DeflatableTireComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_TireDeflatedEvent);

    UIGS_DeflatableTireComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TireTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);

    UFUNCTION(BlueprintCallable)
    void SetBreakable(bool Enabled);

    UFUNCTION()
    void OnRep_TireDeflated();

    UFUNCTION()
    void OnDeflateUpdate(float CurveValue);

    UFUNCTION(BlueprintCallable)
    bool IsBreakable();

    UFUNCTION()
    void FinishDeflate();

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_StartDeflate(FVector_NetQuantize HitLocation, FVector_NetQuantizeNormal FromDirection);

    UPROPERTY(BlueprintAssignable)
    FIGS_TireDeflatedEvent OnTireDeflated;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBreakableEnabled;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DeflateCurve;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* DeflateMaterial;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* DeflatedTireMesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TireRimRadius;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TireHeightChange;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChildHeightChange;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* PunctureAudio;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* PunctureParticle;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, ReplicatedUsing=OnRep_TireDeflated)
    bool mR_IsDeflated;

private:
    UPROPERTY()
    FTimeline Timeline;

    UPROPERTY()
    AActor* OwnerRef;

    UPROPERTY(Instanced)
    UIGS_MaskedChassisComponent* ChassisComponentRef;

    UPROPERTY()
    FVector StartLocation;

    UPROPERTY()
    FVector EndLocation;

    UPROPERTY(Instanced)
    TArray<USceneComponent*> AttachedComponents;

    UPROPERTY()
    TArray<FVector> AttachedComponentsStartLocations;

    UPROPERTY()
    TArray<FVector> AttachedComponentsEndLocations;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
