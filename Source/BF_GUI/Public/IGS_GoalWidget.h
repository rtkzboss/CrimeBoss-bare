#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_GoalWidget.generated.h"

class UIGS_ObjectiveManager;
class UIGS_ObjectiveWidget;
class UIGS_TaskWidgetBase;
class UIGS_TaskWidgetHolder;
class UOverlay;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_GoalWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText goalName;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* ObjectiveOverlay;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ObjectiveWidget* ActiveObjectiveWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_TaskWidgetHolder* ActiveSimpleObjectiveWidget;
    
    UPROPERTY()
    int32 ActiveObjectiveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetHolder> SimpleObjectiveWidgetHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetBase> SimpleObjectiveWidgetClass;
    
private:
    UPROPERTY(Instanced)
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_GoalWidget();

protected:
    UFUNCTION()
    void SpawnObjectiveWidget(int32 inID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveObjectiveChanged();
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjective();
    
};

