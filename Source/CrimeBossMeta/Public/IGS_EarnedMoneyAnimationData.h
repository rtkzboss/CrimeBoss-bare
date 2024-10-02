#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DebriefAnimationSequenceData.h"
#include "IGS_EarnedMoneyAnimationData.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_EarnedMoneyAnimationData : public UObject {
    GENERATED_BODY()
public:
    UIGS_EarnedMoneyAnimationData();

    UFUNCTION(BlueprintPure)
    int32 GetFinalValue() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitialValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBetweenAnims;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_DebriefAnimationSequenceData> Sequences;

};
