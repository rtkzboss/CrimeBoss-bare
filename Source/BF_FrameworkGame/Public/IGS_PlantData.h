#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PlantData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlantData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsPlanted;
    
    UPROPERTY()
    FRotator PlantRotation;
    
    FIGS_PlantData();
};

