#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HitMarkerWidgetSingle.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class AIGS_WeaponBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_HitMarkerWidgetSingle : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerControllerRoot* PlayerController;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_WeaponBase* CurrentWeapon;
    
    UIGS_HitMarkerWidgetSingle();

    UFUNCTION(BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightScreenPosition();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSightOffsetFromScreenCenter();
    
};

