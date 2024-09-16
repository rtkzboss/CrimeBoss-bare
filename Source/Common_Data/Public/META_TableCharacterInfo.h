#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "Templates/SubclassOf.h"
#include "META_TableCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_TableCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality CharacterQuality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> PerkTags;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> Perks;

    COMMON_DATA_API FMETA_TableCharacterInfo();
};
