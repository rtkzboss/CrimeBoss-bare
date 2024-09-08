#pragma once
#include "CoreMinimal.h"
#include "META_StartupWeaponDefinition.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_StartupWeaponDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;
    
    FMETA_StartupWeaponDefinition();
};

