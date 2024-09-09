#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "ParticleWidget.generated.h"

class USlateVectorArtData;

UCLASS()
class BF_GUI_API UParticleWidget : public UWidget {
    GENERATED_BODY()
public:
    UParticleWidget();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USlateVectorArtData* TrailMeshAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SpeedRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DirectionRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RotationRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ParticleLifetimeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ParticleStartSizeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ParticleEndSizeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxParticles;
    
};

