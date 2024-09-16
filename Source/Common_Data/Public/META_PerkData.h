#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "Templates/SubclassOf.h"
#include "META_PerkData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_PerkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_GameplayEffect_PerkBase> Perk;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;

    FMETA_PerkData();
};
