#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardStrength.h"
#include "EMETA_ActionCardTheme.h"
#include "META_ActionCardStrengthValues.h"
#include "META_ActionCardData.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_ActionCardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ActionCardTheme Theme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bActionCardWithDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IndexOfDurationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_ActionCardStrength, FMETA_ActionCardStrengthValues> Strength;
    
    FMETA_ActionCardData();
};

