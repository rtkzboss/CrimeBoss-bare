#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_CharacterGenerationChance.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CharacterGenerationChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag Character;

    UPROPERTY(EditDefaultsOnly)
    float Chance;

    FMETA_CharacterGenerationChance();
};
