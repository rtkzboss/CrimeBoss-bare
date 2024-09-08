#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ArmsLocomotion.h"
#include "IGS_FirstPersonLadderAnimDatabase.generated.h"

class AIGS_WeaponBase;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonLadderAnimDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_WeaponBase> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ArmsLocomotion Locomotion;
    
    FIGS_FirstPersonLadderAnimDatabase();
};

