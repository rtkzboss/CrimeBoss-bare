#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "Components/ActorComponent.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "IGS_ShootingOverride.h"
#include "IGS_AIDataComponent.generated.h"

class AIGS_WaypointBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FIGS_ShootingOverride GetShootingOverride() const;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastEnemyHitTime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastShootTime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastInjuredTime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_SwitchWeaponTask_WeaponType ForcedWeaponType;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool GeneralReactionsEnabled;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool HadSpreadIncreased;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastMoveTime;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool CanEscape;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool CanUseMonsterCloset;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_WaypointBase* LastWaypoint;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_WaypointBase* CurrentWaypoint;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_Speed WaypointSpeed;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool WayPointCrouch;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_ShootingOverride m_ShootingOverride;

};
