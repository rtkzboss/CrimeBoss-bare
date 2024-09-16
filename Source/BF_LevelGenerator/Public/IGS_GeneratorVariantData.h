#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_GeneratorVariantData.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_GeneratorVariantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString DataString;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 EnumByte;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 Direction;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 Event;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector Position;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGameplayTag GameplayTag;

    FIGS_GeneratorVariantData();
};
