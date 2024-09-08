#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AIUnitCharacterData.h"
#include "IGS_AIBaseTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIUnitCharacterData Character;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AILoadoutHolder Loadout;
    
    UPROPERTY()
    FGameplayTag Specialization;
    
    FIGS_AIBaseTierDef();
};

