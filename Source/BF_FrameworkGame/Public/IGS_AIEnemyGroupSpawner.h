#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "IGS_OnAllCharactersDeathSignature.h"
#include "IGS_OnCharacterDeathSignature.h"
#include "IGS_OnCharactersSpawnedSignature.h"
#include "IGS_OnNumberOfCharactersDeathSignature.h"
#include "IGS_AIEnemyGroupSpawner.generated.h"

class AIGS_AISpawnPoint;
class UIGS_AISpawnerData;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AIEnemyGroupSpawner : public AActor, public IIGS_GameplayTagAssetInterfaceCustom {
    GENERATED_BODY()
public:
    AIGS_AIEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGroupParametrizedWithSpecializations(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations);

    UFUNCTION(BlueprintCallable)
    void SpawnGroupParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation);

    UFUNCTION(BlueprintCallable)
    void SpawnGroup();

    UFUNCTION(BlueprintCallable)
    void OverwriteSpawnAmount(const int32 inEasyMin, const int32 inEasyMax, const int32 inMediumMin, const int32 inMediumMax, const int32 inHardMin, const int32 inHardMax);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterDeathSignature OnCharacterDeath;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharactersSpawnedSignature OnCharactersSpawned;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnAllCharactersDeathSignature OnAllCharactersDeath;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnNumberOfCharactersDeathSignature OnNumberOfCharactersDeath;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EIGS_TeamSideEnum TeamSide;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AllowedSpecialTypes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutomaticStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutomaticStartDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ChooseRandomPointEveryTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ChooseRandomPointIfOverflow;

    UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
    int32 Amount;

    UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
    int32 Random;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInt32Range EasyAmount;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInt32Range MediumAmount;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInt32Range HardAmount;

    UPROPERTY(VisibleInstanceOnly)
    bool bDifficultyMigrated;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoolDownTime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastUsedTimestamp;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_AISpawnPoint*> AISpawnPoints;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_AISpawnerData* AISpawnerData;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;


    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);

    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);

    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);

    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);

};
