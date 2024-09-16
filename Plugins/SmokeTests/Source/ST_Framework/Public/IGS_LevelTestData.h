#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_LevelTestData.generated.h"

class UWorld;

UCLASS(BlueprintType)
class ST_FRAMEWORK_API UIGS_LevelTestData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_LevelTestData();

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> Level;

    UPROPERTY(EditAnywhere)
    int32 Seed;

    UPROPERTY(EditAnywhere)
    FString OptionString;

    UPROPERTY(EditAnywhere)
    FBox2D BoundingBox;

    UPROPERTY(EditAnywhere)
    bool bComputeBoundingBoxAutomatically;

    UPROPERTY(EditAnywhere)
    float FramerateGridCellSize;

    UPROPERTY(EditAnywhere)
    TMap<FString, float> CameraHeights;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RenderTargetGamma;

};
