#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "IGS_AISense_ComplexSight.generated.h"

UCLASS(Config=Game)
class BF_AI_API UIGS_AISense_ComplexSight : public UAISense {
    GENERATED_BODY()
public:
    UIGS_AISense_ComplexSight();

protected:
    UPROPERTY(Config, EditDefaultsOnly)
    int32 MaxTracesPerTick;

    UPROPERTY(Config, EditDefaultsOnly)
    int32 MinQueriesPerTimeSliceCheck;

    UPROPERTY(Config, EditDefaultsOnly)
    double MaxTimeSlicePerTick;

    UPROPERTY(Config, EditDefaultsOnly)
    float HighImportanceQueryDistanceThreshold;

    UPROPERTY(Config, EditDefaultsOnly)
    float MaxQueryImportance;

    UPROPERTY(Config, EditDefaultsOnly)
    float SightLimitQueryImportance;

};
