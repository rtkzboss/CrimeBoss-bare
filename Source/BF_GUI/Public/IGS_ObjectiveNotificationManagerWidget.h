#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionObjective.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ObjectiveNotificationManagerWidget.generated.h"

class UIGS_ObjectiveManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_ObjectiveNotificationManagerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_ObjectiveNotificationManagerWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveStateChangedEvent(FIGS_MissionObjective inObjectiveStruct);
    
    UFUNCTION()
    void OnObjectiveStateChanged(int32 inID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveAddedEvent(FIGS_MissionObjective inObjectiveStruct);
    
    UFUNCTION()
    void OnObjectiveAdded(int32 inID);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindToObjectiveManager();
    
private:
    UPROPERTY(Instanced)
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
};

