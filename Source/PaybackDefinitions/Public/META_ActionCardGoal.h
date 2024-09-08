#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardStrength.h"
#include "EMETA_ActionCardTheme.h"
#include "META_ActionCardGoal.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ActionCardGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ActionCardTheme Theme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ActionCardStrength MinStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ActionCardStrength MaxStrength;
    
    FMETA_ActionCardGoal();
};

