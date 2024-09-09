#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "META_HiddenGoalsSaveInfo.h"
#include "Templates/SubclassOf.h"
#include "META_HiddenGoalObject.generated.h"

class AGameModeBase;
class UMETA_BaseAction;
class UMETA_HiddenGoalID;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_HiddenGoalObject : public UObject {
    GENERATED_BODY()
public:
    UMETA_HiddenGoalObject();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(AGameModeBase* inGameModeBase, TSubclassOf<UMETA_HiddenGoalID> inID, int32 inCurrentValue, bool inSuccess, bool inRewardReceived);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTaskInfo(FText& Task);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HiddenGoalsSaveInfo GetSaveData();
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UMETA_HiddenGoalID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NeedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UMETA_BaseAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRewardReceived;
    
};

