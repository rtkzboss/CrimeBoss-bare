#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_GoalNotification.generated.h"

class UMETA_BaseGoal;

UCLASS()
class CRIMEBOSSMETA_API UMETA_GoalNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_GoalNotification();

    UFUNCTION(BlueprintCallable)
    void SetGoal(UMETA_BaseGoal* inGoal);

    UFUNCTION(BlueprintPure)
    UMETA_BaseGoal* GetGoal() const;

private:
    UPROPERTY()
    UMETA_BaseGoal* m_Goal;

};
