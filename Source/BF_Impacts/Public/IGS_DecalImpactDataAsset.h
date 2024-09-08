#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_DecalImpactDataAsset.generated.h"

class UMaterialInterface;

UCLASS()
class BF_IMPACTS_API UIGS_DecalImpactDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(EditAnywhere)
    FVector DecalSize;
    
    UPROPERTY(EditAnywhere)
    float GlowTime;
    
    UPROPERTY(EditAnywhere)
    float HoldTime;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    UIGS_DecalImpactDataAsset();

};

