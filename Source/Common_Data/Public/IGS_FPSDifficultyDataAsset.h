#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_FPSDifficulty.h"
#include "IGS_FPSDifficultySettings.h"
#include "IGS_FPSDifficultyDataAsset.generated.h"

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_FPSDifficultyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_FPSDifficultyDataAsset();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIGS_FPSDifficulty, FIGS_FPSDifficultySettings> FPSDifficultySettings;

};
