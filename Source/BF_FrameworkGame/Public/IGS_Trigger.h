#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TriggerDeadOrAlive.h"
#include "EIGS_TriggerExecuteOn.h"
#include "IGS_BoxSphere.h"
#include "IGS_TriggerEventEventDelegate.h"
#include "IGS_Trigger.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UTexture2D;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_Trigger : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_TriggerExecuteOn TriggerExecuteOn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TriggerLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 TriggerOnBotRepossess: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bNotifyLeftOnDeath: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bDestroyOnDeactivate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float RetriggerDelay;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bTriggerDebug: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseTriggerDebugOptions: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EIGS_TriggerDeadOrAlive TriggerDeadOrAlive;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bTriggerOnlyOnServer: 1;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_TriggerEventEvent OnExecute;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> ActorsInside;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_GameCharacterFramework*> CharactersInside;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_PlayerCharacter*> PlayersInside;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 TriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteDisabled;
    
public:
    AIGS_Trigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCount();
    
protected:
    UFUNCTION()
    void OnActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_OnPossessed(AIGS_GameCharacterFramework* inPlayerCharacter);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActorInTrigger(AActor* inActor) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_PlayerCharacter*> GetAllPlayersInTrigger() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetAllCharactersInTrigger() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetAllActorsInTrigger() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Execute(AActor* inExecutingActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CustomFilter(AActor* inOtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 CheckAllCharactersInTrigger();
    
};

