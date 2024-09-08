#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_AILoadout.generated.h"

class UIGS_AIMeleeWeaponDef;
class UIGS_AIPrimaryWeaponDef;
class UIGS_AISecondaryWeaponDef;

USTRUCT(BlueprintType)
struct FIGS_AILoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AIPrimaryWeaponDef> PrimaryWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AISecondaryWeaponDef> SecondaryWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UIGS_AIMeleeWeaponDef> MeleeWeapon;
    
    BF_FRAMEWORKGAME_API FIGS_AILoadout();
};

