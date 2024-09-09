#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_TaskNotification.generated.h"

class UMETA_BaseGoal;
class UMETA_TaskCondition;

UCLASS()
class CRIMEBOSSMETA_API UMETA_TaskNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_TaskNotification();

    UFUNCTION(BlueprintCallable)
    void SetTaskAndGoal(UMETA_TaskCondition* inTask, UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintPure)
    UMETA_TaskCondition* GetTask() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_BaseGoal* GetGoal() const;
    
private:
    UPROPERTY()
    UMETA_BaseGoal* m_Goal;
    
    UPROPERTY()
    UMETA_TaskCondition* m_Task;
    
};

