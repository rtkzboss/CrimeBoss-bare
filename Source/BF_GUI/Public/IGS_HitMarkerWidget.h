#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitMarkersSetting.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HitMarkerWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class AIGS_WeaponBase;
class UIGS_SimpleHitScanShooter;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_HitMarkerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_HitMarkerWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileKillEnemy(bool inIsHeadshot, const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileHitEnemy(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileHeadshotEnemy(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightScreenPosition();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightOffsetFromScreenCenter();
    
    UFUNCTION(BlueprintCallable)
    void BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter);
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerControllerRoot* PlayerController;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_WeaponBase* CurrentWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_HitMarkersSetting HitMarkersSetting;
    
};

