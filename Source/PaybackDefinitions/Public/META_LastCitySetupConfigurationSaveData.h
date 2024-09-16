#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_LastCitySetupConfigurationSaveData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_LastCitySetupConfigurationSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LastPlayerTileGroupIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> LastPlayerInitialTileGroup;

    FMETA_LastCitySetupConfigurationSaveData();
};
