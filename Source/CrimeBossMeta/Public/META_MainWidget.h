#pragma once
#include "CoreMinimal.h"
#include "IGS_BaseMenuWidget.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "EMETA_MenuState.h"
#include "META_MainWidget.generated.h"

class AMETA_BaseGameMode;
class AMETA_GameStateBase;
class IMETA_UIEventsManager;
class UMETA_UIEventsManager;
class UIGS_BlackmarketManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_StashManagerBaseComponent;
class UMETA_LevelActorsManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MainWidget : public UIGS_BaseMenuWidget {
    GENERATED_BODY()
public:
    UMETA_MainWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityMenuState(EMETA_MenuState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonText(const FText& InText);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGamemodeReady();
    
    UPROPERTY(BlueprintReadOnly)
    TScriptInterface<IMETA_UIEventsManager> UIEventsManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMETA_UIEventsManagerComponent* UIEventsManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_CrewManagerBaseComponent* CrewManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_BlackmarketManagerBaseComponent* BlackmarketManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_FinanceManagerBaseComponent* FinanceManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_GoalManagerBaseComponent* GoalsManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_JobManagerBaseComponent* JobsManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_StashManagerBaseComponent* StashManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_DailyManagerBaseComponent* DailyManager;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMETA_LevelActorsManagerComponent* LevelActorsManagerComponent;
    
    UPROPERTY(BlueprintReadOnly)
    AMETA_BaseGameMode* MetaGameMode;
    
    UPROPERTY(BlueprintReadOnly)
    AMETA_GameStateBase* MetaGameState;
    
};

