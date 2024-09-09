#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagSingleItem.h"
#include "Components/ActorComponent.h"
#include "EIGS_BagType.h"
#include "IGS_CurrentLootBagCountChangedClientOnlyEventSignatureDelegate.h"
#include "IGS_CurrentLootBagCountChangedEventSignatureDelegate.h"
#include "IGS_CurrentlyFilledBagItemAddedEventSignatureDelegate.h"
#include "IGS_EmptyBagCreatedEventSignatureDelegate.h"
#include "IGS_LootBagInfo.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootBagComponent.generated.h"

class UAkAudioEvent;
class UGameplayEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootBagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_LootBagComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server)
    void Server_StashPocketLoot();
    
    UFUNCTION(Reliable, Server)
    void Server_SetTransferingBag(bool inTransfering);
    
    UFUNCTION(Reliable, Server)
    void Server_SetPendingCarryable(bool inPending);
    
    UFUNCTION(Server, Unreliable)
    void Server_PlayBagCreatedSound();
    
    UFUNCTION(Reliable, Server)
    void Server_NewLootBag();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReceiveBag(TArray<FIGS_LootBagSingleItem> inItemClasses);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayBagCreatedSound();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCarryingLootBag() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCarryingLoot() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCarrying() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMaxBags() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerLootWeight();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxBagsAmount() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootBagSingleItem> GetItemsAndRemoveCurrentlyBeingFilledBag();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentlyBeingFilledBagBP(FIGS_LootBagInfo& OutInfo);
    
    UFUNCTION(BlueprintPure)
    TArray<EIGS_BagType> GetBagTypes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FIGS_LootBagInfo> GetBagsInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceRemoveLastFilledBag();
    
    UFUNCTION(BlueprintPure)
    bool DoesBagExist() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPocketLootAndAddToSecuredLoot();
    
    UFUNCTION(BlueprintPure)
    float BagsPercentage() const;
    
    UFUNCTION(BlueprintPure)
    int32 BagsCount() const;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CurrentLootBagCountChangedEventSignature OnCurrentLootBagCountChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CurrentLootBagCountChangedClientOnlyEventSignature OnCurrentLootBagCountClientOnlyChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CurrentlyFilledBagItemAddedEventSignature OnCurrentlyFilledBagItemAddedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_EmptyBagCreatedEventSignature OnEmptyBagCreatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanTakeThrownLootBag;
    
    UPROPERTY()
    TArray<FIGS_LootBagInfo> LootBagsInfo;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bIsEnabled;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* NewBagCreatedAkEvent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> HasMaxBagsGameplayEffect;
    
    UPROPERTY()
    int32 CurrentBagsCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool m_isTransferingBag;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

