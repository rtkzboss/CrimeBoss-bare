#pragma once
#include "CoreMinimal.h"
#include "META_BaseGraphComponent.h"
#include "META_MediaCondition.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MediaCondition : public UMETA_BaseGraphComponent {
    GENERATED_BODY()
public:
    UMETA_MediaCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetResultsCount();
    
    UFUNCTION(BlueprintNativeEvent)
    FText GetEdgeResultText(uint8 inResultID);
    
protected:
    UPROPERTY(BlueprintReadWrite)
    AMETA_BaseGameMode* CachedGameMode;
    
};

