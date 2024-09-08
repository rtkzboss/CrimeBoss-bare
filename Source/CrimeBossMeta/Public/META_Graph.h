#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "META_GraphStruct.h"
#include "META_Graph.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_Graph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_GraphStruct Details;
    
    UMETA_Graph();

};

