#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_LoadingScreenSetup.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct BF_LOADING_API FIGS_LoadingScreenSetup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> BackgroundTexture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> ThrobberSprite;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> BinkMoviePaths;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer TipsTagContainer;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Tips;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> ControllerTips;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> KeyboardMouseTips;

    FIGS_LoadingScreenSetup();
};
