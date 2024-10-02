#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EIGS_EventState.h"
#include "IGS_EventStateChangedEvent.h"
#include "IGS_EventsManager.generated.h"

class UIGS_EventBase;
class UIGS_EventSystemSettings;

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_EventsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_EventsManager();

    UFUNCTION(BlueprintCallable)
    void UpdateEvents();

private:
    UFUNCTION()
    void OnEventStateChanged_Internal(FName inID, EIGS_EventState inOldState, EIGS_EventState inNewState);

public:
    UFUNCTION(BlueprintPure)
    bool IsEventVisible(FName inID) const;

    UFUNCTION(BlueprintPure)
    bool IsEventActive(FName inID) const;

    UFUNCTION(BlueprintPure)
    TArray<UIGS_EventBase*> GetVisibleEvents() const;

    UFUNCTION(BlueprintPure)
    UIGS_EventBase* GetEventByID(FName inID) const;

    UFUNCTION(BlueprintPure)
    TArray<UIGS_EventBase*> GetAllEvents() const;

    UFUNCTION(BlueprintPure)
    TArray<UIGS_EventBase*> GetActiveEvents() const;

    UFUNCTION(BlueprintPure)
    UIGS_EventBase* GetActiveEventByTypeTag(FGameplayTag inTypeTag, bool inExactMatch) const;

    UPROPERTY(BlueprintAssignable)
    FIGS_EventStateChangedEvent OnEventStateChanged;

private:
    UPROPERTY()
    UIGS_EventSystemSettings* m_Settings;

    UPROPERTY(Instanced)
    TMap<FName, UIGS_EventBase*> m_Events;

};
