#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_PerkDataToFPS.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_PerkDataToFPS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> Perk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    FMETA_PerkDataToFPS();
};

