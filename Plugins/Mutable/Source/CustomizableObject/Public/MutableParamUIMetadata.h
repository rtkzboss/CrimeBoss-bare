#pragma once
#include "CoreMinimal.h"
#include "MutableParamUIMetadata.generated.h"

class UObject;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMutableParamUIMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ObjectFriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UISectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UIOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> UIThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> ExtraInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, TSoftObjectPtr<UObject>> ExtraAssets;
    
    CUSTOMIZABLEOBJECT_API FMutableParamUIMetadata();
};

