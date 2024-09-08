#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIWeaponPoolDef.generated.h"

class UIGS_AIMeleeWeaponDef;
class UIGS_AIPrimaryWeaponDef;
class UIGS_AISecondaryWeaponDef;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIWeaponPoolDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_AIPrimaryWeaponDef>> PrimaryWeapons;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_AISecondaryWeaponDef>> SecondaryWeapons;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_AIMeleeWeaponDef>> MeleeWeapons;
    
    FIGS_AIWeaponPoolDef();
};

