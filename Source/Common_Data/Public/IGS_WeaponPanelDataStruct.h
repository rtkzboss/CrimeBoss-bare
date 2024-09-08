#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponModeUIData.h"
#include "IGS_WeaponStatUIData.h"
#include "IGS_WeaponPanelDataStruct.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponPanelDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText SkinName;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FIGS_WeaponModeUIData> Modes;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FIGS_WeaponStatUIData> Stats;
    
    FIGS_WeaponPanelDataStruct();
};

