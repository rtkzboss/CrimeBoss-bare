#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SettingsBase.h"
#include "IGS_RenderingSettings.generated.h"

class UIGS_RenderingSettings;
class UMaterialParameterCollection;

UCLASS(BlueprintType, DefaultConfig)
class BF_SETTINGS_API UIGS_RenderingSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UIGS_RenderingSettings();

    UFUNCTION(BlueprintPure)
    static float VerticalFOVToActualHorizontalFOV(float inVerticalFOV, FVector2D inViewportSize);
    
    UFUNCTION(BlueprintCallable)
    void UseLockpickRenderingSettings(bool inIsLockpicking);
    
    UFUNCTION(BlueprintCallable)
    void UseBotWheelRenderingSettings(bool inIsPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetQualityLevels_Auto(bool inRunBenchmark);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGamePausedInMenu(bool inIsPausedInMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCurrentGameModeMenu(bool inIsMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetFramerateUnlockedCinematic(bool inUnlocked);
    
    UFUNCTION(BlueprintPure)
    static UIGS_RenderingSettings* Instance();
    
    UFUNCTION(BlueprintPure)
    static float HorizontalFOV2VerticalFOV(float inHorizontalFOV);
    
    UFUNCTION(BlueprintPure)
    static TArray<FIntPoint> GetSupportedScreenResolutions();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSteamDeck();
    
    UFUNCTION(BlueprintCallable)
    void EnableReducedTexturePoolSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableMovieCVarSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableMovieCVarSettings() const;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FullscreenModeValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ResolutionValue;
    
    UPROPERTY(Config, EditAnywhere)
    bool VSyncEnabledValue;
    
    UPROPERTY(Config, EditAnywhere)
    float ResolutionScaleValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ProfileValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ViewDistanceQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 AntiAliasingQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PostProcessingQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ShadowQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 TextureQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 VisualEffectQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FoliageQualityValue;
    
    UPROPERTY(Config, EditAnywhere)
    float MotionBlurScaleFPV;
    
    UPROPERTY(Config, EditAnywhere)
    float MotionBlurScale3PV;
    
    UPROPERTY(Config, EditAnywhere)
    float BaseCameraFOVHorizontal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWasFirstTimeBenchmarked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWasFirstTimeMainMenuInitialized;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 DLSSMode;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 XeSSmode;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 FSRmode;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 FrameGenerationMode;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ReflexMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDLAAenabled;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ChosenDisplay;
    
    UPROPERTY(Config, EditAnywhere)
    bool MotionBlurEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSSREnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAOEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SharpenFilterStrength;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FramerateLimitInGame;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FramerateLimitInMenu;
    
    UPROPERTY(Config, EditAnywhere)
    int32 FramerateLimitOutOfFocus;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanChangeMonitorPositions;
    
    UPROPERTY(Config, EditAnywhere)
    bool bQualityModeForConsoles;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialParameterCollection* m_ExtendedSettingsParameterCollection;
    
};

