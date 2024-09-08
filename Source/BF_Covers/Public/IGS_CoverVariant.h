#pragma once
#include "CoreMinimal.h"
#include "IGS_CoverPointDataHolder.h"
#include "IGS_CoverVariant.generated.h"

USTRUCT(BlueprintType)
struct BF_COVERS_API FIGS_CoverVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_CoverPointDataHolder> CoverPointDataHolders;
    
    FIGS_CoverVariant();
};

