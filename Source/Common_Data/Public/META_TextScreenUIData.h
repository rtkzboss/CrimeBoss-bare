#pragma once
#include "CoreMinimal.h"
#include "META_TextScreenUIData.generated.h"

class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TextScreenUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ScreenText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SecondaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite)
    UMETA_BaseStoryGraphManager* GraphRef;
    
    UPROPERTY(BlueprintReadWrite)
    int32 OriginalID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NextNodeID;
    
    FMETA_TextScreenUIData();
};

