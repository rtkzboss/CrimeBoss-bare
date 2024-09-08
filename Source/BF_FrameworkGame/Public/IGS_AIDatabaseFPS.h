#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ControllerDefaultsHolder.h"
#include "IGS_AIBackupTeamDef.h"
#include "IGS_AIBaseDisabledSpecializations.h"
#include "IGS_AIBaseUnitDef.h"
#include "IGS_AICaptainSpecDef.h"
#include "IGS_AICivilianTeamDef.h"
#include "IGS_AICopTeamDef.h"
#include "IGS_AIDetectiveHolder.h"
#include "IGS_AIEmployeeTeamDef.h"
#include "IGS_AIGangsterTeamDef.h"
#include "IGS_AIGuardTeamDef.h"
#include "IGS_AILoadout.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AISwatTeamDef.h"
#include "IGS_GeneralReactionTeamHolder.h"
#include "IGS_PlayerCountAIDifficultyModifierDef.h"
#include "IGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef.h"
#include "IGS_PlayerCountThrowableCooldownModifierDef.h"
#include "IGS_PlayerCountWaveManagerModifierDef.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDatabaseFPS.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AIDatabaseStory;
class UIGS_SettingsID;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AIDatabaseFPS : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICivilianTeamDef Civilians;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIEmployeeTeamDef Employees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AICopTeamDef Cops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIDetectiveHolder Detectives;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGuardTeamDef Guards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AISwatTeamDef SWATs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterTeamDef DollarDragon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterTeamDef Hielo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterTeamDef KarolKhan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIGangsterTeamDef Cagnali;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIBackupTeamDef Backup;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UIGS_SettingsID>, FIGS_AILoadoutHolder> LoadoutOverrides;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_PlayerCountAIDifficultyModifierDef PlayerCount;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_PlayerCountThrowableCooldownModifierDef ThrowableCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_PlayerCountBotDamageReceivedModifierPerDifficultyDef BotDamageReceived;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_PlayerCountWaveManagerModifierDef WaveManager;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftClassPtr<AIGS_GameCharacterFramework>, FIGS_AIBaseUnitDef> VIPs;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_AICaptainSpecDef Captains;
    
    UPROPERTY(EditDefaultsOnly)
    FString Password;
    
    UPROPERTY(EditDefaultsOnly)
    FControllerDefaultsHolder DefaultControllers;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_GeneralReactionTeamHolder GeneralReactions;
    
    UPROPERTY(EditDefaultsOnly)
    UIGS_AIDatabaseStory* StoryDatabase;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_AIBaseDisabledSpecializations DisabledSpecializations;
    
    UPROPERTY()
    uint8 CanEdit;
    
    UIGS_AIDatabaseFPS();

    UFUNCTION(BlueprintPure)
    FIGS_AILoadout GetLoadout(const FIGS_AILoadoutHolder& inLoadoutHolder, FGameplayTagContainer inLoadoutTags, const TSubclassOf<UIGS_SettingsID> inSettingsOverride, const bool inIsStory, const UObject* inDebugWco) const;
    
};

