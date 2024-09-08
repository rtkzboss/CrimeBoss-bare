#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_CharacterState.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChainCharacter.generated.h"

class UIGS_ChainLoadoutID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CharacterTagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_ChainLoadoutID> CharacterLoadout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_CharacterState OverrideState;
    
    FIGS_ChainCharacter();
};

