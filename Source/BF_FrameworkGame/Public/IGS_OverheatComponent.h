#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnOverheatStateChanged.h"
#include "IGS_OnOverheatValueChanged.h"
#include "IGS_OverheatComponent.generated.h"

class UCurveFloat;
class UIGS_ShooterBase;
class UIGS_SimpleHitScanShooter;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_OverheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_OverheatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStaticMeshToApplyOverheat(UStaticMeshComponent* inStaticMesh, const int32 inIndex);

    UFUNCTION()
    void OnRep_IsOverheated();

    UFUNCTION()
    void OnRep_CurrentOverheat();

    UFUNCTION(BlueprintNativeEvent)
    void HandleOverheatStateChanged(bool inState);

    UFUNCTION(BlueprintPure)
    bool GetIsOverheated() const;

    UFUNCTION(BlueprintPure)
    float GetCurrentOverheatValue() const;

    UFUNCTION(BlueprintCallable)
    void BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter);

    UFUNCTION(BlueprintCallable)
    void BindToShooter(UIGS_ShooterBase* inShooter);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoBindShooter;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* OverheatCurve;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float IncreasePerBullet;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IncreasePerSecond;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DecreasePerSecond;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeUntilCooldown;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnOverheatValueChanged OnOverheatValueChangedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnOverheatStateChanged OnOverheatStateChangedEvent;

protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsOverheated)
    bool mR_bIsOverheated;

    UPROPERTY(ReplicatedUsing=OnRep_CurrentOverheat)
    float mR_CurrentOverheat;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
