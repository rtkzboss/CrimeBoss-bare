#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_WeaponClassChance.generated.h"

USTRUCT(BlueprintType)
struct FMETA_WeaponClassChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Chance;
    
    PAYBACKDEFINITIONS_API FMETA_WeaponClassChance();
};

