#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "EIGS_RadialImpactChassis.h"
#include "Templates/SubclassOf.h"
#include "IGS_MaskedChassisComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UCurveVector;
class UDamageType;
class UPrimitiveComponent;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_MaskedChassisComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UIGS_MaskedChassisComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TriggerCarAlarm();
    
    UFUNCTION(BlueprintCallable)
    void SetBreakable(bool Enabled);
    
    UFUNCTION()
    void OnWindowInstanceBroken(int32 InstanceIndex);
    
    UFUNCTION()
    void OnTirePuncturedUpdate(FVector CurveValue);
    
    UFUNCTION()
    void OnTirePuncturedFinish();
    
    UFUNCTION()
    void OnTirePunctured();
    
    UFUNCTION()
    void OnRep_ChassisState();
    
    UFUNCTION()
    void OnRadialImpactUpdate(FVector CurveValue);
    
    UFUNCTION()
    void OnRadialImpactFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsBreakable();
    
    UFUNCTION()
    void ChassisTakeRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION()
    void ChassisTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION()
    void BreakSection(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool& OutSectionState);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_HandleMaskedSection(FVector_NetQuantize ImpactPoint, FVector_NetQuantizeNormal ShotFrom);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_BreakSection(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool OutSectionState);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBreakableEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RearViewMirrorUVSection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LeftSideMirrorUVSection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RightSideMirrorUVSection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RearViewMirrorAttachedToSection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    int32 RearViewMirrorShaderSlot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    int32 LeftSideMirrorShaderSlot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    int32 RightSideMirrorShaderSlot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> LeftRearViewMirrorDebris;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LeftRearViewMirrorSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> RightRearViewMirrorDebris;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RightRearViewMirrorSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> RearViewMirrorDebris;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RearViewMirrorSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* SwingOnPunctureCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseRadialImpactAnims;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimFront;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimFrontLeft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimLeft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimRearLeft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimRear;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimRearRight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimRight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveVector* RadialImpactAnimFrontRight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InRadialDamageMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InRadialDamageMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OutRadialDamageMultiplierMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OutRadialDamageMultiplierMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableCarAlarm;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* CarAlarm;
    
private:
    UPROPERTY()
    AActor* OwnerRef;
    
    UPROPERTY()
    FTimeline Timeline;
    
    UPROPERTY()
    FTimeline RadialImpactTimeline;
    
    UPROPERTY(VisibleDefaultsOnly, ReplicatedUsing=OnRep_ChassisState)
    bool mR_bRearViewMirror;
    
    UPROPERTY(VisibleDefaultsOnly, ReplicatedUsing=OnRep_ChassisState)
    bool mR_bDoorLeftRearView;
    
    UPROPERTY(VisibleDefaultsOnly, ReplicatedUsing=OnRep_ChassisState)
    bool mR_bDoorRightRearView;
    
    UPROPERTY(VisibleDefaultsOnly)
    EIGS_RadialImpactChassis RadialHitPosition;
    
    UPROPERTY(VisibleDefaultsOnly)
    float RadialDamageMultiplier;
    
    UPROPERTY()
    bool bCarAlarmTriggered;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

