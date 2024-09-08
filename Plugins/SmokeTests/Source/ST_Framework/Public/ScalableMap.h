#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ScalableMap.generated.h"

UCLASS()
class ST_FRAMEWORK_API AScalableMap : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TileWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RenderTargetGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SaveImagesFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseSeperateFilePathsForEachResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RenderFromResolutionDownToMinimumResolution;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTile;
    
public:
    AScalableMap(const FObjectInitializer& ObjectInitializer);

};

