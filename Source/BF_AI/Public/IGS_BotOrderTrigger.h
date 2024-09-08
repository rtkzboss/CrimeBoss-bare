#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/TriggerBox.h"
#include "EIGS_CharacterID.h"
#include "IGS_BotOrderData.h"
#include "IGS_BotOrderTrigger.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UPrimitiveComponent;

UCLASS()
class BF_AI_API AIGS_BotOrderTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EIGS_CharacterID> IgnoredCharacters;
    
    UPROPERTY()
    TArray<FIGS_BotOrderData> BotsInBox;
    
    UPROPERTY()
    TArray<FIGS_BotOrderData> PlayersInBox;
    
public:
    AIGS_BotOrderTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void TriggerOrder(AIGS_GameCharacterFramework* forCharacter, bool hasPlayerApproval);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredCharacter(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION()
    void OnCollisionEnter(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION()
    void OnCollisionEnd(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_BotOrderData> GetPlayersInBox();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_BotOrderData> GetBotsInBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinishBotOrder(AIGS_GameCharacterFramework* Bot) const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanBeTriggered(AIGS_GameCharacterFramework* forCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredCharacter(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

