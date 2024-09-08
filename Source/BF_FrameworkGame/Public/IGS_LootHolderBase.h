#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_AIStealthLootBehavior.h"
#include "IGS_LootHolderOpenedDelegate.h"
#include "IGS_OnDisplayCaseBrokenEventDelegate.h"
#include "IGS_LootHolderBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_LootCollectionBase;
class USceneComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_LootHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_LootCollectionBase* LootCollection;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LootHolderOpened OnLootHolderOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, EditAnywhere)
    FIGS_OnDisplayCaseBrokenEvent OnDisplayCaseBrokenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* AttachableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool OpenManually;
    
    UPROPERTY(EditDefaultsOnly)
    bool OpeningAffectsLootCollection;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InteractOpenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxAIAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OutlineWithCollection;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_AIStealthLootBehavior AIStealthLooting;
    
    UPROPERTY(VisibleAnywhere)
    bool BreakToOpen;
    
    AIGS_LootHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool ShouldBotBreakToOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void SetLootHolderOpened(AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ReportLootCollectionConnected();
    
    UFUNCTION(BlueprintCallable)
    void OpenByAI(AActor* inInstigator);
    
private:
    UFUNCTION()
    void OnLockPicked(AIGS_GameCharacterFramework* inInstigator, const bool inSuccess);
    
    UFUNCTION()
    void OnInteracted(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION()
    void OnComponentBroken(AActor* inDmgCauser, const bool inOpen);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void LootHolderOpenedEvent(AActor* inInstigator);
    
    UFUNCTION(BlueprintPure)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeOpenedSilently() const;
    
};

