#pragma once
#include "CoreMinimal.h"
#include "IGS_Range.generated.h"

USTRUCT()
struct COVERGENERATOR_API FIGS_Range {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float AngleStart;
    
    UPROPERTY(VisibleAnywhere)
    float AngleEnd;
    
    FIGS_Range();
};

