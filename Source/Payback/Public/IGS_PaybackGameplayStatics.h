#pragma once
#include "CoreMinimal.h"
#include "EIGS_SessionPropertyKey.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_BadFlyGameplayStatics.h"
#include "CommonHeisterData.h"
#include "ECommonMissionResult.h"
#include "IGS_EquipmentInventoryObject.h"
#include "IGS_GameplayEffect_Class.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_MeleeWeaponInventoryObject.h"
#include "IGS_ModInventoryObject.h"
#include "IGS_WeaponInventoryObject.h"
#include "IGS_WeaponSkinTableRow.h"
#include "META_WeaponInventoryObject.h"
#include "IGS_Quick_ChainPlayerCharacters.h"
#include "IGS_UnlockedCharacterSaveData.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FindSessionsCallbackProxy.h"
#include "EIGS_CharacterID.h"
#include "EIGS_DialogueGroup.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WieldableSlot.h"
#include "EIGS_ChanceEnum.h"
#include "Templates/SubclassOf.h"
#include "IGS_PaybackGameplayStatics.generated.h"

class AController;
class AIGS_GameCharacterFramework;
class AIGS_GameStateGame;
class AIGS_IntelligentGameCharacter;
class AIGS_PlayerCharacter;
class APaybackGameModeBase;
class APlayerState;
class UIGS_AlarmLocalizationTable;
class UIGS_RandomStreamHolder;
class UIGS_WeaponSkinData;
class UObject;
class UPaybackGameViewportClient;

UCLASS()
class PAYBACK_API UIGS_PaybackGameplayStatics : public UIGS_BadFlyGameplayStatics {
    GENERATED_BODY()
public:
    UIGS_PaybackGameplayStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void UpdateSubObjectiveWithDialogue(UObject* inWCO, FText inNewObjective, EIGS_DialogueGroup inDialogueGroup, AIGS_GameCharacterFramework* inInstigator, FName inDialogueID);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void UpdateSubObjective(UObject* inWCO, FText inNewObjective);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void UpdateMainObjective(UObject* inWCO, FText inNewObjective);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void UnlockCharacterAccountWide(UObject* inWCO, EIGS_CharacterID inID, bool inMaxLevel);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void TeleportCharactersRelativeTo(const UObject* inWCO, const FTransform& inOrigin, const FTransform& inDestination, const TArray<AIGS_GameCharacterFramework*>& inCharacters);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartEndMission(UObject* inWCO, ECommonMissionResult inMissionResult);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FBlueprintSessionResult> SortSessionsByParameter(const UObject* inWCO, TArray<FBlueprintSessionResult> inSessions, bool inAscending, EIGS_SessionPropertyKey inKey);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetPlayerImmortality(UObject* inWCO, bool inImmortal);

    UFUNCTION(BlueprintCallable)
    static void SetControllerRotation(AController* inNewPlayer, const FRotator& inStartRotation);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool SetAccountVariableValue(UObject* inWCO, FGameplayTag inVariable, int32 InValue, bool inIsDebugSave);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RestartGame(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ResetUnlockedCharactersAndContracts(UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    static void RemoveWeaponFromPlayer(AIGS_PlayerCharacter* inPlayerCharacter, EIGS_WieldableSlot inSlotToRemove);

    UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs=outBranches))
    static void RandomChanceFromStream(int32 inChance, UPARAM(Ref) UIGS_RandomStreamHolder*& inRandomStream, EIGS_ChanceEnum& outBranches);

    UFUNCTION(BlueprintPure)
    static void OwnsCommonHeisterData(const APlayerState* inPlayerState, const FCommonHeisterData inCommonHeisterData, bool& OwnsHeisterData);

    UFUNCTION(BlueprintPure)
    static void OwnsChainPlayerCharacters(const APlayerState* inPlayerState, const FIGS_Quick_ChainPlayerCharacters inChainPlayerCharacters, bool& OwnsPlayerCharacters);

    UFUNCTION(BlueprintCallable)
    static void OverridePlayerInventory(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inPrimaryWeapon, TSubclassOf<UMETA_WeaponInventoryObject> inSecondaryWeapon, TSubclassOf<UIGS_EquipmentInventoryObject> inEquipment, bool inRemoveIfNone, EIGS_WieldableSlot inSlotToSelect);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void OverloadAllRobotsOfSide(UObject* inWCO, const EIGS_TeamSideEnum inTeamSide, UPARAM(Ref) AController*& inInstigator, const FVector inOrigin, const float inMaxDelay, const float inMaxDistance);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void OutlineAllPickups(UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static bool IsAccountVariableUnlocked(UObject* inWCO, FGameplayTag inVariable);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static TArray<FIGS_UnlockedCharacterSaveData> GetUnlockedCharactersAccountWide(UObject* inWCO);

    UFUNCTION(BlueprintPure)
    static void GetUniqueIdFromPlayerState(APlayerState* inPlayerState, FUniqueNetIdRepl& inUnqiueNetId);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FIGS_WeaponSkinTableRow> GetSkinsCompatibleWithWeapon(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inWeapon);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetPlayerLoadoutFromAILoadoutHolder(const UObject* inWCO, const FIGS_AILoadoutHolder& inLoadoutHolder, TSubclassOf<UMETA_WeaponInventoryObject>& outPrimary, TSubclassOf<UMETA_WeaponInventoryObject>& outSecondary, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment, bool inIsStory);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetPlayerLoadoutFromAICharacter(const UObject* inWCO, UPARAM(Ref) AIGS_IntelligentGameCharacter*& inCharacter, TSubclassOf<UMETA_WeaponInventoryObject>& outPrimary, TSubclassOf<UMETA_WeaponInventoryObject>& outSecondary, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);

    UFUNCTION(BlueprintPure)
    static FString GetPlayerIdFromUniqueNetId(const FUniqueNetIdRepl& inUniqueNetId);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UPaybackGameViewportClient* GetPaybackViewport(UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static AIGS_GameStateGame* GetGameStateGame(UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static APaybackGameModeBase* GetGameModeBase(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSubclassOf<UIGS_EquipmentInventoryObject> GetEquipmentFromAILoadoutHolder(const UObject* inWCO, const FIGS_AILoadoutHolder& inLoadoutHolder);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static int32 GetCampaignBossLevel(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetBaggedLootWeightFromAllHeisters(UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetAllLootFromPlayer(AIGS_PlayerCharacter* inPlayerCharacter);

    UFUNCTION(BlueprintCallable)
    static void GetAlarmLocalizedText(UIGS_AlarmLocalizationTable* inTable, EIGS_AlarmReason inReason, FText& OutText);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static int32 GetAccountVariableValue(UObject* inWCO, FGameplayTag inVariable, bool inIsDebugSave);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void FinishEndMissionNoResultScreen(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void FinishEndMission(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void EndMissionNoResultScreen(UObject* inWCO, ECommonMissionResult inMissionResult);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void EndMission(UObject* inWCO, ECommonMissionResult inMissionResult);

    UFUNCTION(BlueprintPure)
    static void ChainPlayerMatchesHeisterDataUniqueId(const FIGS_Quick_ChainPlayerCharacters inChainPlayerCharacters, const FCommonHeisterData inHeisterData, bool& MatchesUniqueId);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ApplyScalableFloatModifierFromPerk(UObject* inWCO, FGameplayTag inPerkID, FGameplayAttribute inAttribute, float inRawValue, bool& outFound, float& outNewValue);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ApplyScalableFloatModifierFromCharacterClass(UObject* inWCO, TSubclassOf<UIGS_GameplayEffect_Class> inCharacterClass, FGameplayAttribute inAttribute, int32 inCharacterLevel, float inRawValue, bool& outFound, float& outNewValue);

    UFUNCTION(BlueprintCallable)
    static void AddWeaponToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UIGS_WeaponInventoryObject> inWeapon, TArray<TSubclassOf<UIGS_ModInventoryObject>> inWeaponMods, UIGS_WeaponSkinData* inWeaponDefaultSkin, UIGS_WeaponSkinData* inWeaponSpecificSkin, bool inSelect, TSubclassOf<UMETA_WeaponInventoryObject> inOptionalDefinitionObject, bool inThrowAwayOldWeapon);

    UFUNCTION(BlueprintCallable)
    static void AddWeaponDefinitionToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inWeapon, bool inSelect, bool inThrowAwayOldWeapon);

    UFUNCTION(BlueprintCallable)
    static void AddMeleeWeaponToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UIGS_MeleeWeaponInventoryObject> inWeapon, bool inSelect, TSubclassOf<UMETA_WeaponInventoryObject> inOptionalDefinitionObject, bool inThrowAwayOldWeapon);

};
