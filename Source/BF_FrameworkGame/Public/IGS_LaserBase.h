#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_LaserBase.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LaserBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_LaserBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnLaserDisabled();

    UFUNCTION(BlueprintImplementableEvent)
    void OnLaserDestroyed();

private:
    UFUNCTION()
    void OnLaserDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);

public:
    UFUNCTION(BlueprintCallable)
    void DisableLaser(AIGS_GameCharacterFramework* inInstigator);

    UPROPERTY(EditDefaultsOnly)
    bool Indestructible;

    UPROPERTY(EditDefaultsOnly)
    bool DestroyingReportsToHQ;

    UPROPERTY(EditDefaultsOnly)
    bool DestroyingIsSuspicious;

    UPROPERTY(EditDefaultsOnly)
    bool DisablingIsSuspicious;

};
