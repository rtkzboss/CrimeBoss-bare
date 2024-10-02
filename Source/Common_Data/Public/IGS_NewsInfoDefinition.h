#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_NewsInfoDefinition.generated.h"

class UBinkMediaPlayer;
class UObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_NewsInfoDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag itemTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* BinkAlpha;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* BinkRGB;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UObject> RGBVideo;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UObject> VideoMask;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowInMenu;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ShowInMenuTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowAlsoWhenEventIsActive;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EventID;

    FIGS_NewsInfoDefinition();
};
