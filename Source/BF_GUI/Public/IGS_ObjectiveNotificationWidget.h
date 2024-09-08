#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionObjective.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ObjectiveNotificationWidget.generated.h"

class UIGS_ObjectiveManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_ObjectiveNotificationWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ObjectivePreviouslyAdded;
    
private:
    UPROPERTY(Instanced)
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_ObjectiveNotificationWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNotificationReady();
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjectiveNotification(FIGS_MissionObjective inObjectiveStruct, bool bAddedObjective);
    
};

