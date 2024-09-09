#pragma once
#include "CoreMinimal.h"
#include "META_TimerNodeSaveData.h"
#include "EMETA_EventTime.h"
#include "META_BaseNode_SG.h"
#include "META_TimerNode_SG.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_TimerNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_TimerNode_SG();

    UFUNCTION(BlueprintCallable)
    void SetSaveData(FMETA_TimerNodeSaveData SaveData);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveData(FMETA_TimerNodeSaveData& SaveData);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinDaysValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxDaysValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_EventTime ContinueAfter;
    
    UPROPERTY()
    int32 StartingDay;
    
    UPROPERTY()
    int32 ResultValue;
    
};

