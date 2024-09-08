#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings.generated.h"

class AIGS_PlayerFPVArms;
class UCurveFloat;
class UCurveTable;
class UDataTable;
class UForceFeedbackEffect;
class UIGS_CarryableInventoryObject;
class UIGS_DamageTypeFallDamage;
class UIGS_ImpactTypeObject;
class UIGS_PickupClassesData;
class UIGS_StealthSettings;
class UIGS_StealthVoiceovers;
class UIGS_SuspicionOffenceDataTablesAsset;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> AmmoBoxDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> AmmoBoxSpawnDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UForceFeedbackEffect> WeaponPlaceholderForceFeedback;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UCurveTable> PlayerSettingsCurveTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UIGS_ImpactTypeObject> KillConfirmedParticleClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> FallDamageCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UIGS_DamageTypeFallDamage> FallDamageType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UIGS_CarryableInventoryObject> BodyBagCarryableClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_PickupClassesData> PickupClassesData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<AIGS_PlayerFPVArms> DefaultArmsClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_StealthSettings> StealthSettingsDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_StealthVoiceovers> StealthVoiceoversDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_SuspicionOffenceDataTablesAsset> OffenceTablesDataAsset;
    
    UIGS_FrameworkGameDevSettings();

};

