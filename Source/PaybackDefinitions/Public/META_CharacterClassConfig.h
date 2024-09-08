#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_CharacterClassConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CharacterClassConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ClassPerk;
    
    FMETA_CharacterClassConfig();
};

