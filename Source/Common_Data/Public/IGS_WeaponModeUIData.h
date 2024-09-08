#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponModeUIData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponModeUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText Icon;
    
    UPROPERTY(BlueprintReadWrite)
    FText Name;
    
    FIGS_WeaponModeUIData();
};

