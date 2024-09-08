#pragma once
#include "CoreMinimal.h"
#include "EMETA_GraphStatus.h"
#include "META_GraphStruct.generated.h"

class UStoryGraphManager;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_GraphStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStoryGraphManager* GraphManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GraphStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> CurrentNodeIds;
    
    FMETA_GraphStruct();
};

