#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "KantanPointStyle.generated.h"

class UTexture2D;

UCLASS()
class KANTANCHARTSSLATE_API UKantanPointStyle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* DataPointTexture;
    
    UPROPERTY(EditAnywhere)
    FIntPoint PointSizeTextureOffsets[3];
    
    UKantanPointStyle();

};

