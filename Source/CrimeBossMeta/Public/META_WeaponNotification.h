#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_WeaponNotification.generated.h"

class UMETA_Weapon;

UCLASS()
class CRIMEBOSSMETA_API UMETA_WeaponNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_WeaponNotification();

    UFUNCTION(BlueprintCallable)
    void SetWeapon(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintPure)
    UMETA_Weapon* GetWeapon() const;
    
private:
    UPROPERTY()
    UMETA_Weapon* m_Weapon;
    
};

