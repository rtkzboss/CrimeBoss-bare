#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterClasses.h"
#include "IGS_CharacterTableRow.h"
#include "META_PerkData.h"
#include "IGS_CharacterMissionProgress.h"
#include "META_RemovedCharacter.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_JobResult.h"
#include "META_CharacterID.h"
#include "META_MissionID.h"
#include "IGS_CrewManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_CrewManagerComponent.generated.h"

class AMETA_BaseGameMode;
class UMETA_Character;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_CrewManagerComponent : public UIGS_CrewManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_CrewManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCharacterPlotlineCompleted(FGameplayTag inCharacter);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    EIGS_CharacterID SelectCharacterForGenerationFromPool(const TArray<EIGS_CharacterID>& inCharacterPool) const;

    UFUNCTION(BlueprintCallable)
    void SaveCharacterMissionStatus(FGameplayTag inCharacter, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inResult);

    UFUNCTION(BlueprintCallable)
    void ResetCharacterPlotlineProgressForCharacter(FGameplayTag inCharacter);

    UFUNCTION(BlueprintCallable)
    void ResetActiveGenericVariants();

    UFUNCTION(BlueprintCallable)
    void RemoveCharacterFromCampaign(UMETA_Character* inCharacter);

    UFUNCTION(BlueprintCallable)
    UMETA_Character* MorphUniqueCharacter(UMETA_Character* inOriginalCharacter, const FGameplayTag inNewCharacter, const bool inForceIgnoreLock);

    UFUNCTION(BlueprintPure)
    bool IsHeisterRemovedFromCampaign(EIGS_CharacterID inCharacterID) const;

    UFUNCTION(BlueprintPure)
    bool IsHeisterExcludedFromCampaign(FGameplayTag inCharacterID) const;

    UFUNCTION(BlueprintPure)
    bool IsCharacterPlotlineCompleted(FGameplayTag inCharacterID) const;

    UFUNCTION(BlueprintPure)
    bool IsCharacterMutuallyExclusiveWithActiveCharacterByTagID(FGameplayTag inCharacterID) const;

    UFUNCTION(BlueprintPure)
    bool IsCharacterMutuallyExclusiveWithActiveCharacter(const FIGS_CharacterTableRow& inCharacterData, FGameplayTag inCharacterID) const;

    UFUNCTION(BlueprintPure)
    bool IsCharacterFromEntitledDLC(FGameplayTag inCharacterID) const;

    UFUNCTION(BlueprintPure)
    TArray<EIGS_CharacterID> GetUniqueCharactersAvailableForGeneration() const;

    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> GetEntitledCharactersToBeAddedForTheFirstTime();

    UFUNCTION(BlueprintPure)
    void GetCharacterMissionProgressForCharacter(FGameplayTag inCharacter, bool& outFound, FIGS_CharacterMissionProgress& outMissionProgress) const;

    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateUniqueCharacterByTagID(FGameplayTag inCharacterTagID, bool inIsTemporary, bool inForceIgnoreLock);

    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateUniqueCharacterByID(EIGS_CharacterID inCharacterID, bool inIsTemporary, bool inForceIgnoreLock);

    UFUNCTION(BlueprintPure)
    bool CanUniqueCharacterBeGenerated(FGameplayTag inCharacterID, const AMETA_BaseGameMode* inMetaGameMode, const TArray<UMETA_Character*>& inBlackmarketCharactersPool) const;

    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> CalculateStartingHeistersBonus();

protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FMETA_PerkData> LastPromotePerks;

    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Character*> CrewHeisters;

    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_Character*> HeistersOnJob;

    UPROPERTY(BlueprintReadWrite)
    TMap<FMETA_CharacterID, float> RecoveryInfoOfHeistersInjures;

    UPROPERTY(BlueprintReadWrite)
    TArray<FMETA_RemovedCharacter> RemovedCrewHeisters;

    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer ExcludedHeisters;

    UPROPERTY(BlueprintReadWrite)
    TMap<FMETA_CharacterID, int32> HeistersMoodResetCounter;

    UPROPERTY(BlueprintReadWrite)
    TSet<EIGS_CharacterID> CharactersRevengePool;

    UPROPERTY(BlueprintReadWrite)
    TSet<EIGS_CharacterID> CharactersPriorityRandomPool;

    UPROPERTY(BlueprintReadWrite)
    TSet<EIGS_CharacterID> CharactersNormalRandomPool;

    UPROPERTY(BlueprintReadWrite)
    TSet<EIGS_CharacterID> UnlockedCharacters;

    UPROPERTY(BlueprintReadWrite)
    int32 RemainAmountOfCompletedMissionsBeforeUnlock;

    UPROPERTY(BlueprintReadWrite)
    TMap<FMETA_CharacterID, int32> RemainAmountOfDaysForHealingCharacter;

    UPROPERTY(BlueprintReadWrite)
    TMap<FMETA_CharacterID, int32> CounterOfDeathPreventingUsage;

    UPROPERTY(BlueprintReadWrite)
    TArray<FIGS_CharacterClasses> ActiveGenericVariants;

};
