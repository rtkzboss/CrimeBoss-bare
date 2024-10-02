#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TaskProgressDisplayType.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskStativeInfo.h"
#include "EMETA_NeedValueType.h"
#include "META_BaseGraphComponent.h"
#include "META_Task.h"
#include "META_TaskCondition.generated.h"

class AMETA_BaseGameMode;
class UMETA_BaseStoryGraphManager;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TaskCondition : public UMETA_BaseGraphComponent, public IMETA_Task {
    GENERATED_BODY()
public:
    UMETA_TaskCondition();

    UFUNCTION(BlueprintCallable)
    void SetStativeInformation(AMETA_BaseGameMode* inGameMode, FMETA_TaskStativeInfo inTaskStativeInfo);

    UFUNCTION(BlueprintCallable)
    void SetNeedValue(EMETA_NeedValueType inNeedValueType, int32 inNeedValue, FGameplayTag inNeedValueTag);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshValues();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EMETA_TaskProgressDisplayType GetProgressValueDisplayType();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetNeedValue();

    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetGraphSoftObjectCurrentNodeOwner();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindUnbindDelegates(bool inBind);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TaskTitle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TaskID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProcessValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_NeedValueType NeedValueType;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 NeedValue;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FGameplayTag NeedTag;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bOptional;

    UPROPERTY(BlueprintReadWrite)
    EMETA_TaskStatus Status;


    // Fix for true pure virtual functions not being implemented
};
