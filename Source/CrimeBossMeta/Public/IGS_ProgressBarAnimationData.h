#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ProgressBarAnimationData.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_ProgressBarAnimationData : public UObject {
    GENERATED_BODY()
public:
    UIGS_ProgressBarAnimationData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText PreviousText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText FinalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FinalProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
};

