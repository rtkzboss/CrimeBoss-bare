#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_TaskWidgetHolder.generated.h"

class UHorizontalBox;
class UIGS_ObjectiveManager;
class UIGS_TaskWidgetBase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_TaskWidgetHolder : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_TaskWidgetHolder();

    UFUNCTION(BlueprintImplementableEvent)
    void OnTaskValuesChangedEvent();
    
protected:
    UFUNCTION()
    void OnTaskValuesChanged(int32 inID);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTaskStateChangedEvent(EIGS_ObjectiveState inState);
    
protected:
    UFUNCTION()
    void OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState);
    
public:
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
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UIGS_TaskWidgetBase> TaskWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UHorizontalBox* HolderBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldPlayWidgetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FontSize;
    
protected:
    UPROPERTY(Instanced)
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
};

