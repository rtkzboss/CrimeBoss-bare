#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_EarnedMoneyAnimationSequenceData.h"
#include "IGS_EarnedMoneyAnimationData.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_EarnedMoneyAnimationData : public UObject {
    GENERATED_BODY()
public:
    UIGS_EarnedMoneyAnimationData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FinalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_EarnedMoneyAnimationSequenceData> Sequences;
    
};

