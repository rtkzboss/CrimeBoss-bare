#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_WorldSpaceWidgetManager.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_WorldSpaceWidgetBase;
class UIGS_WorldSpaceWidgetManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WorldSpaceWidgetManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ObjectiveWidgetsVisibility;
    
    UPROPERTY()
    int32 TeammateWidgetsVisibility;
    
    UPROPERTY()
    int32 DetectionWidgetsVisibility;
    
    UPROPERTY()
    int32 GenericPingWidgetsVisibility;
    
    UPROPERTY()
    int32 WalkieTalkieWidgetsVisibility;
    
    UPROPERTY()
    int32 AlertWidgetsVisibility;
    
    UPROPERTY()
    int32 BlinkingExclamationWidgetsVisibility;
    
    UPROPERTY()
    int32 CallingAlarmWidgetsVisibility;
    
    UPROPERTY()
    int32 PushingAlarmButtonWidgetsVisibility;
    
    UPROPERTY()
    int32 TelephoneCallingHQWidgetsVisibility;
    
    UPROPERTY()
    int32 CivilianEscapingWidgetsVisibility;
    
    UPROPERTY()
    int32 IsZiptiedWidgetsVisibility;
    
    UPROPERTY()
    int32 PossibleObjectiveWidgetsVisibility;
    
    UPROPERTY()
    int32 LocationWidgetsVisibility;
    
    UPROPERTY()
    int32 WarningWidgetsVisibility;
    
    UPROPERTY()
    int32 DrillWidgetsVisibility;
    
    UPROPERTY()
    int32 SecurityPhoneWidgetsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ObjectiveWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TeammateWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DetectionWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GenericPingWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WalkieTalkieWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlertWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CallingAlarmWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PushingAlarmButtonWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TelephoneCallingHQWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CivilianEscapingWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsZiptiedWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LocationWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WarningWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PossibleObjectiveWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DrillWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SecurityPhoneWidgetsScreenEdgeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlinkingExclamationWidgetsScreenEdgeVisibility;
    
    UPROPERTY()
    AIGS_PlayerControllerRoot* m_LocalPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UIGS_WorldSpaceWidgetBase*> WorldSpaceWidgets;
    
    UIGS_WorldSpaceWidgetManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterWidget(UIGS_WorldSpaceWidgetBase* inWidgetComponent, EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldSpaceWidgetTypeVisibility(EIGS_WorldWidgetType inType, bool inEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_WorldSpaceWidgetManager* GetWorldWidgetManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    bool GetWidgetGroupVisibility(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable)
    bool GetWidgetGroupScreenEdgeVisibility(EIGS_WorldWidgetType inType);
    
};

