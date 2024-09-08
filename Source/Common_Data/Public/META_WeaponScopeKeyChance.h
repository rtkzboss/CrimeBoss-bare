#pragma once
#include "CoreMinimal.h"
#include "META_WeaponScopeKey.h"
#include "META_WeaponScopeKeyChance.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponScopeKeyChance : public FMETA_WeaponScopeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Chance;
    
    FMETA_WeaponScopeKeyChance();
};

