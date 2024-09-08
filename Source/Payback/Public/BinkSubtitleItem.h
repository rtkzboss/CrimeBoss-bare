#pragma once
#include "CoreMinimal.h"
#include "BinkSubtitleItem.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FBinkSubtitleItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Character;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Time;
    
    FBinkSubtitleItem();
};

