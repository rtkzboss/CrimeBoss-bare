#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_AILootingBehavior.h"
#include "IGS_FullyLootedDelegate.h"
#include "IGS_LootCollectionBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_LootHolderBase;
class ANavigationData;
class UIGS_InteractiveComponent;
class UIGS_LootItemBaseComponent;
class ULightComponentBase;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LootCollectionBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentWeight;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalValue;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalLootValue;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalMoneyValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TotalBagSize;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector LootingPos;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator LootingRotation;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_InteractiveComponent* LootCollectionInteraction;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* LootingCharacter;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* LootSuggestedFor;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bIsCosmetic;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, ReplicatedUsing=OnRep_LootItems)
    TArray<UIGS_LootItemBaseComponent*> LootItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsEmpty)
    bool bIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<ULightComponentBase*> LightsToDestroy;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_FullyLooted OnFullyLooted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_FullyLooted OnSingleItemLooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsShineEnabled;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EIGS_AILootingBehavior m_AILootingBehavior;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> AllowedCharacters;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_bIsInCase)
    bool m_bIsInCase;
    
public:
    AIGS_LootCollectionBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TestLootPosition();
    
public:
    UFUNCTION(BlueprintCallable)
    void SortLoot();
    
    UFUNCTION(BlueprintCallable)
    void SetLootingCharacter(AIGS_GameCharacterFramework* inLootingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLootHolder(AIGS_LootHolderBase* inLootHolder);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShineEnabled(bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInCase(bool inIsInCase);
    
    UFUNCTION(BlueprintCallable)
    void SetAILootingBehvaior(EIGS_AILootingBehavior inLootingBehavior);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllowedCharacter(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootComponent(UIGS_LootItemBaseComponent* inLootComponent);
    
    UFUNCTION()
    void OnRep_LootItems();
    
private:
    UFUNCTION()
    void OnRep_bIsInCase();
    
public:
    UFUNCTION()
    void OnRep_bIsEmpty();
    
private:
    UFUNCTION()
    void OnNavigationBuildFinished(ANavigationData* inNavData);
    
public:
    UFUNCTION(BlueprintCallable)
    void LootItemsChanged();
    
    UFUNCTION(BlueprintPure)
    bool IsLootValidForAI(const bool inIgnoreOnlyUnlocked) const;
    
    UFUNCTION(BlueprintPure)
    AIGS_LootHolderBase* GetLootHolder() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAllowedCharacter(AIGS_GameCharacterFramework* inCharacter);
    
};

