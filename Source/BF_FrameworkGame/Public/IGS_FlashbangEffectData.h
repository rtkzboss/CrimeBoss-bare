#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_FlashbangEffectData.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UMaterialInterface;
class UObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_FlashbangEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> EffectPostProcesses;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> WeightTimeCurve;

    UPROPERTY(EditAnywhere)
    float EffectDuration;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EffectAkAudioEvent;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkRtpc> FlashbangEffectAkRtpc;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StunnedElectricStartAkAudioEvent;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StunnedElectricStopAkAudioEvent;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StunnedStartAkAudioEvent;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StunnedStopAkAudioEvent;

    UPROPERTY(EditAnywhere)
    FVector2D ExplosionAroundPlayerPowerTrigger;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> StunnedEffect;

    UPROPERTY(EditAnywhere)
    float StunnedEffectDuration;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> StunnedElectricEffect;

    UPROPERTY(EditAnywhere)
    float StunnedElectricEffectDuration;

    FIGS_FlashbangEffectData();
};
