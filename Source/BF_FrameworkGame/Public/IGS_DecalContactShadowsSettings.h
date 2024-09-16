#pragma once
#include "CoreMinimal.h"
#include "IGS_DecalContactShadowsSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DecalContactShadowsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WidthScale;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Offset;

    BF_FRAMEWORKGAME_API FIGS_DecalContactShadowsSettings();
};
