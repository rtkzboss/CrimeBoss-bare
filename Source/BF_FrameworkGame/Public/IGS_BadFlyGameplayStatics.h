#pragma once
#include "CoreMinimal.h"
#include "IGS_BadFlyGameplayStaticsFramework.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_ItemType.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_LootBagSingleItem.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/DamageType.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_AIMontageType.h"
#include "EIGS_AITiers.h"
#include "EIGS_CharacterID.h"
#include "EIGS_PlatformName.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_DamageTypeBase.h"
#include "IGS_ImpactTypeObject.h"
#include "EIGS_AlarmReason.h"
#include "EIGS_BagType.h"
#include "EIGS_DamageLimiterType.h"
#include "EIGS_SpawnAnimType.h"
#include "EIGS_StorePlatform.h"
#include "IGS_LootBagInfo.h"
#include "IGS_SpawnerEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_BadFlyGameplayStatics.generated.h"

class AActor;
class AController;
class AIGS_AISpawnPoint;
class AIGS_GameCharacterFramework;
class AIGS_LootBagPickup;
class AIGS_ObjectiveScenarioBase;
class AIGS_PlayerCharacter;
class AIGS_PlayerStateGame;
class AIGS_ScriptManagerBase;
class AIGS_SuspicionEventActor;
class APlayerState;
class UIGS_ObjectStatus;
class UIGS_OutlineComponent;
class UIGS_WaveManagerData;
class UMETA_Character;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UTexture2D;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_BadFlyGameplayStatics : public UIGS_BadFlyGameplayStaticsFramework {
    GENERATED_BODY()
public:
    UIGS_BadFlyGameplayStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void TriggerBotLimbo(const UObject* inWCO, bool inPlayVioceovers);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void TriggerAlarmDelayed(const UObject* inWCO, EIGS_AlarmReason inReason, float inDelay);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void TriggerAlarm(const UObject* inWCO, EIGS_AlarmReason inReason);

    UFUNCTION(BlueprintCallable)
    static void TogglePlayerEjectPosses();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StopWaveManager(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StopCopsArriveTimer(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartWaveManager(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartStorm(const UObject* inWCO, bool inIsInstant, bool inIsEndless);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartRetreat(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartPursue(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartHunt(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartCopsArriveTimer(UObject* inWCO, float InTime);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void StartBreak(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAttachedToComp(const UObject* inWCO, USceneComponent* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy, FName InBoneName);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAttached(const UObject* inWCO, AActor* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAdvanced(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActor(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy);

    UFUNCTION(BlueprintCallable)
    static void SpawnSquadAroundActorWithoutDelegate(AActor* inActor, EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpecialization, int32 inEnemyCount);

    UFUNCTION(BlueprintCallable)
    static void SpawnSquadAroundActor(AActor* inActor, EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpecialization, int32 inEnemyCount, FIGS_SpawnerEventDelegate inSpawnerDelegate);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_LootBagPickup* SpawnLootBagWithData(const UObject* inWCO, TArray<FIGS_LootBagSingleItem> inItems, FTransform InTransform);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_LootBagPickup* SpawnLootBag(const UObject* inWCO, TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inItemClasses, FTransform InTransform, bool bRegisterToLootManager);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_LootBagPickup* SpawnGadgetBag(const UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClas, FTransform InTransform);

    UFUNCTION(BlueprintCallable)
    static TArray<FVector> SortLocationsByDistance(TArray<FVector> inLocations, FVector inOriginPoint);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetWaveManagerData(const UObject* inWCO, UIGS_WaveManagerData* inWaveManagerData);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUseTempWaveManager(const UObject* inWCO, bool InValue);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerWavesDirections(const UObject* inWCO, int32 inWavesDirections);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerVehicleTargetPoint(const UObject* inWCO, FIGS_InterestPointHolder inInterestPointHolder);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerUseVehicles(const UObject* inWCO, bool inUseVehicles);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerSegment(const UObject* inWCO, int32 inStormTypes, const TArray<FGameplayTagContainer>& inPointsGameplayTags, const TMap<EIGS_UnitSpecialization, int32>& inSpecialTypesMaxCount, int32 inMaxEnemyCount, float inStormLength, float inBreakLength);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerMaxHeliDistance(const UObject* inWCO, float inMaxDistance);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerMaxCarInPhaseCount(const UObject* inWCO, int32 inMaxCarCountInPhase);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerMaxCarDistance(const UObject* inWCO, float inMaxDistance);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetUpWaveManagerMaxCarCount(const UObject* inWCO, int32 inMaxCarCount);

    UFUNCTION(BlueprintCallable)
    static void SetTortillaBlendEffectValue(AIGS_PlayerCharacter* inPlayer, float InValue);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetTeamSidesVariations(const UObject* inWCO, TMap<EIGS_TeamSideEnum, uint8> inTeamSidesVariations);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetSpawnGroupsActive(const UObject* inWCO, bool Inactive, const TArray<FGameplayTagContainer>& inPointsGameplayTags);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetShowPlayerOutline(const UObject* inWCO, bool inShowPlayerOutline);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetMissionRequiredBagsInWeight(UObject* inWCO, int32 inRequiredWeight);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetMissionLootValues(UObject* inWCO, int32 inObjectiveValue, int32 inTotalMissionValue);

    UFUNCTION(BlueprintCallable)
    static void SetLowHealthEffectThreshold(AIGS_PlayerCharacter* inPlayer, float inLowHealthEffectThreshold);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetIsTurfWar(const UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    static void SetGameCultureBasedOnConsoleSystemLocale();

    UFUNCTION(BlueprintCallable)
    static void SetDamageLimiterTypeEnabled(AIGS_PlayerCharacter* inPlayer, EIGS_DamageLimiterType inType, bool inEnabled);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetAITeamTier(const UObject* inWCO, const EIGS_TeamSideEnum inTeamSide, const EIGS_AITiers inTier);

    UFUNCTION(BlueprintCallable)
    static void RequestStopSession();

    UFUNCTION(BlueprintCallable)
    static void RequestSimulate();

    UFUNCTION(BlueprintCallable)
    static void RequestPlaySession(bool bNewWindow);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RemoveTerritoryRestrictionTag(const UObject* inWCO, const FName& inTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static int32 PlayerOffencesToIndex(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void OverrideSpecialTierRatio(const UObject* inWCO, const float inNewRatio, const EIGS_TeamSideEnum inTeamSide);

    UFUNCTION(BlueprintCallable)
    static bool MatchesTagDepth(FGameplayTag inTagLeft, FGameplayTag inTagRight, int32 InDepth);

    UFUNCTION(BlueprintPure)
    static bool IsTearingDown(const UObject* inCaller);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsLastStrike(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsInLimbo(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsEveryCharacterOfTeamsideDeadOrDown(UObject* inWCO, EIGS_TeamSideEnum inTeamSide);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsEveryCharacterOfTeamsideDead(UObject* inWCO, EIGS_TeamSideEnum inTeamSide);

    UFUNCTION(BlueprintCallable)
    static bool IsDamageLimiterTypeEnabled(AIGS_PlayerCharacter* inPlayer, EIGS_DamageLimiterType inType);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsAlarmed(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetTotalWeightSpawned(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetSuspicionAmountForOffence(const UObject* inWCO, AIGS_PlayerCharacter* inPlayer, FGameplayTagContainer inOffences);

    UFUNCTION(BlueprintCallable)
    static void GetSubTagOnDepth(FGameplayTag inTag, int32 InDepth, FGameplayTag& outTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static int32 GetStrikeCountForOffender(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static EIGS_StorePlatform GetStorePlatformType(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_ScriptManagerBase* GetScriptManager(UObject* inWCO);

    UFUNCTION(BlueprintPure)
    static float GetPingForLocalPlayer(APlayerState* inPlayerState);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static FString GetPersistentLevelName(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static AIGS_ObjectiveScenarioBase* GetObjectiveScenario(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UTexture2D* GetMetaCharacterPicture(UObject* inWCO, UMETA_Character* inCharacter);

    UFUNCTION(BlueprintCallable)
    static int32 GetMaximumStrikes();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetMainCategoryTagFromMetaHierarchy(FGameplayTag inTag);

    UFUNCTION(BlueprintPure)
    static int32 GetLatencyForPlayerState(APlayerState* inPlayerState);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static EIGS_ItemType GetItemType(UObject* inWCO, FIGS_LootBagInfo inBagInfo);

    UFUNCTION(BlueprintCallable)
    static bool GetIsPS5();

    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetGameplayTagHierarchy(FGameplayTag inTag);

    UFUNCTION(BlueprintPure)
    static FString GetCurrentTextPlatformName();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static int32 GetCurrentStrikes(const UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    static EIGS_PlatformName GetCurrentPlatform();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UTexture2D* GetCharacterPicture(UObject* inWCO, EIGS_CharacterID inCharacterID, bool bIsMaxLeveled, int32 inGenericID, FGameplayTag inCharacterSkinID);

    UFUNCTION(BlueprintCallable)
    static FText GetCharacterNameFromPlayerState(AIGS_PlayerStateGame* inPS);

    UFUNCTION(BlueprintCallable)
    static FText GetCharacterNameFromPawn(AIGS_GameCharacterFramework* inCharacter);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FText GetCharacterName(UObject* inWCO, EIGS_CharacterID inCharacterID);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetBagValue(UObject* inWCO, FIGS_LootBagInfo inBagInfo);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static EIGS_BagType GetBagTypeForInfo(UObject* inWCO, FIGS_LootBagInfo inBagInfo);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static EIGS_BagType GetBagType(UObject* inWCO, EIGS_ItemType inBagType, float inBagValue);

    UFUNCTION(BlueprintCallable)
    static UIGS_OutlineComponent* GetActorOutlineComponent(const AActor* inActor, const bool inWarnFindComponentByClass);

    UFUNCTION(BlueprintCallable)
    static UIGS_ObjectStatus* GetActorObjectStatus(const AActor* inActor);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ForceSWATSpawn(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ForceSpawnWaveWithTags(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, int32 inEnemyCount, const TArray<FGameplayTagContainer>& inPointsGameplayTags);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ForceSpawnWave(const UObject* inWCO, int32 inEnemyCount);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ForceSpawnSquadOnSpawnPoints(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations, const TArray<AIGS_AISpawnPoint*>& inSpawnPoints, EIGS_SpawnAnimType inSpawnAnim);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ForceSetMissionRequiredBagsInWeight(UObject* inWCO, int32 inRequiredWeight);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ForceHideEscapeWarning(UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    static void DebugTestRequestAnimation(AIGS_GameCharacterFramework* inCharacter, EIGS_AIMontageType inMontageType, uint8 inMontageVariation);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateExplosiontWithFalloff(UObject* inWCO, float inBaseDamage, float inMinDamage, FVector inOrigin, float inDamageInnerRadius, float inDamageOuterRadius, float inDamageFalloff, float inEffectRadius, TSubclassOf<UDamageType> inDamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateExplosionEffectOnly(UObject* inWCO, FVector inOrigin, float inEffectRadius, AActor* inCausingActor);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void CreateExplosion(UObject* inWCO, float inBaseDamage, FVector inOrigin, float inDamageRadius, float inEffectRadius, TSubclassOf<UDamageType> inDamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);

    UFUNCTION(BlueprintCallable)
    static void CreateDestroyEffect(UPrimitiveComponent* inSourceComponent, TSubclassOf<UIGS_DamageTypeBase> inDamageType, TSubclassOf<UIGS_ImpactTypeObject> inImpactType, const FHitResult& inHitResult, const AIGS_GameCharacterFramework* inOwnerCharacter);

    UFUNCTION(BlueprintCallable)
    static TArray<FString> CompareStrings(TArray<FString> inStringArray);

    UFUNCTION(BlueprintPure)
    static bool CheckIsRunningCommandlet();

    UFUNCTION()
    static float ApplyDamage(const FHitResult& inHitResult, AIGS_GameCharacterFramework* inOwner, float inDamage, const TSubclassOf<UDamageType> inDamageType);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddWaveManagerWavesRandomDirection(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddTerritoryRestrictionTag(const UObject* inWCO, const FName& inTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddSuspicionOverrideAmount(const UObject* inWCO, FGameplayTagContainer inOffences, float inAmount, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddSuspicionGeneral(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddSuspicionForPlayer(const UObject* inWCO, AIGS_PlayerCharacter* inPlayer, FGameplayTagContainer inOffences, AActor* inDetector);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddSuspicion(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddStrikesForSuspActors(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddStrikesForSpecialOffence(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddStrikesForPlayer(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddStrikesForOffender(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddStrikesForNoise(const UObject* inWCO, FName inNoiseTag, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddStrikesCustom(const UObject* inWCO, int32 inCount, const FGameplayTag inBlameTag, AActor* inDetector, AActor* inOffender);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddInfoMessageClientOnly(const UObject* inWCO, FText inInfoText);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddErrorMessage(const UObject* inWCO, FText inErrorText);

};
