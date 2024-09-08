#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "IGS_UnlockCharacter.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_UnlockCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMaxLevel;
    
    FIGS_UnlockCharacter();
};

