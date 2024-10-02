#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DebriefAnimationSequenceData.h"
#include "IGS_EarnedXPAnimationData.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_EarnedXPAnimationData : public UObject {
    GENERATED_BODY()
public:
    UIGS_EarnedXPAnimationData();

    UFUNCTION(BlueprintPure)
    int32 GetFinalPoints() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitialLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialProgress;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NewLevel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NewProgress;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBetweenAnims;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_DebriefAnimationSequenceData> Sequences;

};
