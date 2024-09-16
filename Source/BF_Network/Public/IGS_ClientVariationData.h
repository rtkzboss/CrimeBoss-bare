#pragma once
#include "CoreMinimal.h"
#include "IGS_ClientVariationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_NETWORK_API FIGS_ClientVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAnimMontage> VoiceFacialAnimation;

    UPROPERTY(BlueprintReadOnly)
    float VoiceProgress;

    FIGS_ClientVariationData();
};
