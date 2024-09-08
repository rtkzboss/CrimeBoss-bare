#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_CharacterTraits.generated.h"

USTRUCT(BlueprintType)
struct FIGS_CharacterTraits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReviveCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery AllowedWieldables;
    
    COMMON_DATA_API FIGS_CharacterTraits();
};

