#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ClassData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_ClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ClassPerk;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    COMMON_DATA_API FIGS_ClassData();
};
