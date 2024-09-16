#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_OnFireEffectData.generated.h"

class UAkAudioEvent;
class UCurveFloat;
class UObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_OnFireEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> EffectPostProcesses;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> WeightTimeCurve;

    UPROPERTY(EditAnywhere)
    float EffectDuration;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectStartAkAudioEvent;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectEndAkAudioEvent;

    FIGS_OnFireEffectData();
};
