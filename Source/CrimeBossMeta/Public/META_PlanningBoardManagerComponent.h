#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_ChangeStatusPlanningBoardEvent.h"
#include "META_PlanningBoardItemRow.h"
#include "META_PlanningBoardManagerComponent.generated.h"

class UIGS_PaybackSaveGameCareer;
class UMETA_PlanningBoardItemObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_PlanningBoardManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlanningBoardItemStatusChanged, FGameplayTag, itemTag, EMETA_PlanningBoardItemStatus, itemStatus);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlanningBoardFeatureStateChanged, bool, IsUnlocked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlanningBoardDataChanged);

    UMETA_PlanningBoardManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlanningBoardItemStatus(FGameplayTag itemTag, EMETA_PlanningBoardItemStatus Status);

    UFUNCTION(BlueprintCallable)
    void SetActivePlanningBoard(FGameplayTag planningBoardTag, bool callEvent);

    UFUNCTION(BlueprintCallable)
    void SaveData(UIGS_PaybackSaveGameCareer* SaveObject);

private:
    UFUNCTION()
    void OnGraphVariableValueChanged(FGameplayTag variableTag, int32 Value);

public:
    UFUNCTION(BlueprintCallable)
    void LoadData();

    UFUNCTION(BlueprintPure)
    bool IsThereAnyChangeStatusEvent() const;

    UFUNCTION(BlueprintPure)
    bool IsPlanningBoardUnlocked() const;

    UFUNCTION(BlueprintCallable)
    void HandleChangeStatusEvent(UPARAM(Ref) FMETA_ChangeStatusPlanningBoardEvent& Event);

    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, EMETA_PlanningBoardItemStatus> GetPlanningBoardStatuses() const;

    UFUNCTION(BlueprintPure)
    EMETA_PlanningBoardItemStatus GetPlanningBoardItemStatus(FGameplayTag itemTag) const;

    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, UMETA_PlanningBoardItemObject*> GetPlanningBoardItemsMap() const;

    UFUNCTION(BlueprintPure)
    FMETA_PlanningBoardItemRow GetPlanningBoardItemData(FGameplayTag itemTag) const;

    UFUNCTION(BlueprintPure)
    FMETA_ChangeStatusPlanningBoardEvent GetNextChangeStatusEvent() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetActivePlanningBoardTag() const;

    UFUNCTION(BlueprintCallable)
    void AddChangeStatusEvent(FGameplayTag itemTag, FGameplayTag voiceoverTag, EMETA_PlanningBoardItemStatus fromStatus, EMETA_PlanningBoardItemStatus toStatus);

    UPROPERTY(BlueprintAssignable)
    FPlanningBoardItemStatusChanged OnPlanningBoardItemStatusChanged;

    UPROPERTY(BlueprintAssignable)
    FPlanningBoardDataChanged OnPlanningBoardChanged;

    UPROPERTY(BlueprintAssignable)
    FPlanningBoardDataChanged OnPlanningBoardEventsChanged;

    UPROPERTY(BlueprintAssignable)
    FPlanningBoardFeatureStateChanged OnPlanningBoardFeatureStateChanged;

private:
    UPROPERTY()
    FGameplayTag m_ActivePlanningBoardTag;

    UPROPERTY()
    TMap<FGameplayTag, UMETA_PlanningBoardItemObject*> m_PlanningBoardItemsMap;

    UPROPERTY()
    TArray<FMETA_ChangeStatusPlanningBoardEvent> m_ChangeStatusEvents;

};
