#pragma once
#include "CoreMinimal.h"
#include "META_BaseGraphComponent.h"
#include "META_Condition.h"
#include "META_BaseCondition.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseCondition : public UMETA_BaseGraphComponent, public IMETA_Condition {
    GENERATED_BODY()
public:
    UMETA_BaseCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteCondition(AMETA_BaseGameMode* inGameMode);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InvertResult;
    

    // Fix for true pure virtual functions not being implemented
};

