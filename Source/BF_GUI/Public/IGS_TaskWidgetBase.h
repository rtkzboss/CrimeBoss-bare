#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_TaskWidgetBase.generated.h"

class UIGS_ObjectiveManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_TaskWidgetBase : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_TaskWidgetBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTaskValuesChangedEvent();

    UFUNCTION()
    void OnTaskValuesChanged(int32 inID);

    UFUNCTION(BlueprintImplementableEvent)
    void OnTaskStateChangedEvent(EIGS_ObjectiveState inState);

    UFUNCTION()
    void OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState);

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText TaskName;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ObjectiveState TaskState;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CountLeft;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CountTotal;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bTimerTask;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bPaused;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bValueTask;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StartTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Duration;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 FontSize;

    UPROPERTY(Instanced)
    UIGS_ObjectiveManager* m_ObjectiveManager;

};
