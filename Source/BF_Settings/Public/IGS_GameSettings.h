#pragma once
#include "CoreMinimal.h"
#include "Rendering/RenderingCommon.h"
#include "EIGS_HitMarkersSetting.h"
#include "EIGS_ShowCrosshairSetting.h"
#include "IGS_SettingsBase.h"
#include "IGS_GameSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig)
class BF_SETTINGS_API UIGS_GameSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UIGS_GameSettings();

    UFUNCTION(BlueprintPure)
    static UIGS_GameSettings* Instance();

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString Language;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bOnlyMainDialogues;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bSubtitlesEnabledValue;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowFPS;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowPing;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseWhiteBaker;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseAltDollarDragon;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseCampaignWeaponSkins;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bHalloweenMode;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 MenuBackgroundIndex;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bTutorialsEnabled;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bFriendlyOutline;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    EIGS_HitMarkersSetting HitMarkersSetting;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    EColorVisionDeficiency ColorVisionDeficiencyType;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    EIGS_ShowCrosshairSetting ShowCrosshairSetting;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float HeadBobIntensity;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float ColorVisionDeficiencySeverity;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShowHeisterColorsInSubtitlesValue;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bPoliceRadioChatterEnabled;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bTinnitusAudioEffectEnabled;

    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseSystemDefaultLanguage;

    UPROPERTY(Transient)
    bool bChangedDefaultLanguage;

private:
    UPROPERTY(Transient)
    TArray<FString> AvailableLocalizations;

};
