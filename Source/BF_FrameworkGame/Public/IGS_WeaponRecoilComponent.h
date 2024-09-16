#pragma once
#include "CoreMinimal.h"
#include "IGS_RecoilDefinition.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_WeaponRecoilComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_WeaponRecoilComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reinit();

    UFUNCTION(BlueprintCallable)
    void AddRecoil();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_RecoilDefinition RecoilDefinition;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentRecoilPitchBank;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TotalRecoilPitchBank;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CompensatePitchBank;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastPitch;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastYaw;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentDownSpeed;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator TargetRotationDelta;

};
