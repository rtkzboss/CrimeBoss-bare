#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PropInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Block;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MinRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ChanceShare;
    
    BF_PROPS_API FPropInfoStruct();
};

