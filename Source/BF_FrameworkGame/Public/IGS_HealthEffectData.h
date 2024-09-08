#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_HealthEffectData.generated.h"

class UIGS_LowHealthEffectDataAsset;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_HealthEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UIGS_LowHealthEffectDataAsset* LowHealthEffectDataAsset;
    
    FIGS_HealthEffectData();
};

