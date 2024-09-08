#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BackgroundChangeFinishedDelegate.h"
#include "IGS_BossBackgroundManager.generated.h"

class UDataTable;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_BossBackgroundManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBackgroundChangeFinished OnBackgroundChangeFinished;
    
private:
    UPROPERTY()
    UDataTable* m_DataTable;
    
    UPROPERTY()
    bool m_BackgroundChangeInProgress;
    
    UPROPERTY()
    FName m_CurrentLevelToLoad;
    
    UPROPERTY()
    FName m_WaitingLevelToLoad;
    
public:
    UIGS_BossBackgroundManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UnloadIncorrectLevel(FName inLevelToUnload);
    
    UFUNCTION()
    void LoadCorrectLevel(FName inLevelToLoad);
    
    UFUNCTION()
    void LevelHandlingFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsBackgroundChangeInProgress();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyBackgroundLoaded();
    
private:
    UFUNCTION()
    void IncorrectLevelUnloaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleBackgroundSublevel(FName inLevelToLoad);
    
    UFUNCTION(BlueprintCallable)
    FName GetNameForLevel(int32 inLevel);
    
private:
    UFUNCTION()
    TArray<FName> GetLoadedBackgroundLevelNames() const;
    
};

