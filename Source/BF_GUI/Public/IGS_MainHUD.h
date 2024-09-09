#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EIGS_MostPrioHintType.h"
#include "IGS_MostImportantHintChangedSignatureDelegate.h"
#include "IGS_MainHUD.generated.h"

class UIGS_HUDKantanDatasourceHolder;
class UIGS_MainHUDWidget;

UCLASS(Abstract, NonTransient)
class BF_GUI_API AIGS_MainHUD : public AHUD {
    GENERATED_BODY()
public:
    AIGS_MainHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void ToggleGASDebugSimple();
    
    UFUNCTION(Exec)
    void ToggleGASDebugFull();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWarzoneCounter(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWarzoneCounterMaxHeisters(int32 inCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWarzoneCounterCurrentHeisters(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMostPrioHintType(const EIGS_MostPrioHintType inMostPrioHintType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLootBarState(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLootBarGoalValue(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHUDMessage(const FText& InText, float inDuration, int32 inCountdown);
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MostImportantHintChangedSignature OnMostImportantHintChanged;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_HUDKantanDatasourceHolder* KantanDatasourceHolder;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_MainHUDWidget* MainHUDWidget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EIGS_MostPrioHintType CurrMostPrioHintType;
    
};

