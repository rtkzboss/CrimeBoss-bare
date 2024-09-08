#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RecoilDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_RecoilDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Vertical;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Horizontal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoilPitchReturnRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalRecoilDecay;
    
    FIGS_RecoilDefinition();
};

