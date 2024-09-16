#pragma once
#include "CoreMinimal.h"
#include "IGS_GlassPanelPreset.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FIGS_GlassPanelPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> BaseMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> FracturedMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DestroyedMesh;

    BF_FRAMEWORKGAME_API FIGS_GlassPanelPreset();
};
