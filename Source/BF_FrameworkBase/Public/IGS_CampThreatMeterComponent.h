#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_OnCampingChangedEventSignature.h"
#include "IGS_CampThreatMeterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CampThreatMeterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CampThreatMeterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsCamping() const;

    UFUNCTION(BlueprintPure)
    float GetCampLevel() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnCampingChangedEventSignature OnCampingChangedEvent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TickInterval;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeProtected;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceThreshold;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CampZoneDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToMarkAsCamp;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCampDecrease;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NearHardCampZoneMultip;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HardCampPosUpdateDelay;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageToThreatMultip;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShieldToThreatMultip;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThreatOnKill;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThreatOnHeadshot;

    UPROPERTY(EditAnywhere)
    FFloatInterval ThreatThresholds;

};
