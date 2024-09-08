#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_GameStateMenuBase.h"
#include "META_Sequence.h"
#include "META_GameStateBase.generated.h"

class AMETA_BaseGameMode;
class UIGS_SubtitleManager;
class UMETA_CommonData;
class UMETA_EconomyData;

UCLASS(Abstract)
class CRIMEBOSSMETA_API AMETA_GameStateBase : public AIGS_GameStateMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AMETA_BaseGameMode* MetaGameMode;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SubtitleManager* SubtitleManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMETA_CommonData* CommonMetaData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMETA_EconomyData* EconomyMetaData;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_bInitialized)
    bool bInitialized;
    
    UPROPERTY()
    TArray<FMETA_Sequence> m_SequencesQueue;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag CurrentSequenceTag;
    
private:
    UPROPERTY()
    int32 m_CurrentSequenceItemIndex;
    
    UPROPERTY()
    FMETA_Sequence CurrentSequence;
    
public:
    AMETA_GameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartSequence(FGameplayTag inSequenceTag);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void ServerInitialize_Internal();
    
    UFUNCTION(Reliable, Server)
    void Server_Initialize();
    
protected:
    UFUNCTION()
    void OnRep_bInitialized();
    
    UFUNCTION(BlueprintPure)
    bool IsSequenceInProgress() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void IsCareerCompleted(bool& outCareerCompleted);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ExecuteSequenceItem(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteNextSequenceItem();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void ClientInitialize_Internal();
    
    UFUNCTION(Client, Reliable)
    void Client_Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSequence(UPARAM(Ref) FMETA_Sequence& InSequence);
    
};

