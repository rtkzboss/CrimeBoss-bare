#pragma once
#include "CoreMinimal.h"
#include "META_MediaCondition.h"
#include "META_TextScreenCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TextScreenCondition : public UMETA_MediaCondition {
    GENERATED_BODY()
public:
    UMETA_TextScreenCondition();

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ScreenText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SecondaryText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
};

