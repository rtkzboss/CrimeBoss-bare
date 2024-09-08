#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ObjectiveWidget.generated.h"

class UIGS_ObjectiveManager;
class UIGS_TaskWidgetBase;
class UIGS_TaskWidgetHolder;
class UVerticalBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_ObjectiveWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_ObjectiveEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_ObjectiveEvent OnObjectivesShown;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* TaskBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetHolder> TaskWidgetHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetBase> TaskWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetBase> OrTaskWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldPlayWidgetAnimations;
    
    UPROPERTY()
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText ObjectiveName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ObjectiveState ObjectiveState;
    
    UPROPERTY(Instanced)
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_ObjectiveWidget();

protected:
    UFUNCTION()
    void OnTaskAdded(int32 inID, int32 inObjectiveID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveTextChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveStateChangedEvent();
    
    UFUNCTION()
    void OnObjectiveStateChanged(int32 inID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveHideAndDestroy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeSimpleObjective();
    
};

