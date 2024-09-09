#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialsManager.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;
class UIGS_Screen;
class UIGS_ScreenHandler;
class UIGS_TutorialsManager;
class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_TutorialsManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnDisplayedTutorialsOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnDisplayedTutorialsCompleted);
    
    UIGS_TutorialsManager();

    UFUNCTION(BlueprintCallable)
    bool TryToDisplayPendingTutorials();
    
    UFUNCTION(BlueprintCallable)
    void SetForbiddenScreensForTutorials(const TArray<FGameplayTag>& inForbiddenScreens);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllTutorials();
    
    UFUNCTION(BlueprintCallable)
    bool MoveOpenedTutorialBackToPending();
    
    UFUNCTION(BlueprintPure)
    bool IsTutorialCompleted(const FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyTutorialPending() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyTutorialOpened() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_TutorialsManager* GetTutorialsManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintPure)
    bool GetTutorialsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UIGS_Screen*> GetPendingTutorials() const;
    
    UFUNCTION(BlueprintPure)
    bool CanOpenTutorialScreen(const UIGS_ScreenHandler* inScreenHandler) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPendingTutorialScreen(UIGS_Screen* inScreen);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnDisplayedTutorialsCompleted OnDisplayedTutorialsCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnDisplayedTutorialsOpened OnDisplayedTutorialsOpened;
    
private:
    UPROPERTY()
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY()
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
    UPROPERTY(Instanced)
    TArray<UIGS_Screen*> m_PendingTutorials;
    
    UPROPERTY(Instanced)
    UIGS_Screen* m_CurrentlyDisplayedTutorial;
    
    UPROPERTY()
    TArray<FGameplayTag> m_ForbiddenScreensForTutorials;
    
};

