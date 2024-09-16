#pragma once
#include "CoreMinimal.h"
#include "META_WeaponInventoryObject.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_WeaponIconReadyOutputPin.h"
#include "Templates/SubclassOf.h"
#include "IGS_WaitForWeaponIcon.generated.h"

class UIGS_WeaponSkinData;
class UObject;
class UTexture2D;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForWeaponIcon : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForWeaponIcon();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForWeaponIcon* WaitForWeaponIcon(UObject* inWorldContextObject, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponObject, TSoftObjectPtr<UIGS_WeaponSkinData> inSkin);

private:
    UFUNCTION()
    void ExecuteOnIconReady(TSoftObjectPtr<UTexture2D> inWeaponIcon);

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_WeaponIconReadyOutputPin WhenWeaponIconReady;

private:
    UPROPERTY()
    TSubclassOf<UMETA_WeaponInventoryObject> m_WeaponObject;

};
