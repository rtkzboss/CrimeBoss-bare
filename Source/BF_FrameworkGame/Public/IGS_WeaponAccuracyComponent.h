#pragma once
#include "CoreMinimal.h"
#include "IGS_AIWeaponDefinitions.h"
#include "IGS_WeaponAccuracyDefinition.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponAccuracyComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponAccuracyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_WeaponAccuracyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetCurrentSpreadConeHalfAngleInRadians() const;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CombinedHalfAngleInRadians;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SpreadHalfAngleInRadians;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MovementMultiplier;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAiming;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsVR;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDrawingDebug;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_WeaponAccuracyDefinition AccuracyDefinition;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_AIWeaponDefinitions AIDefinition;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag WeaponClassTag;

};
