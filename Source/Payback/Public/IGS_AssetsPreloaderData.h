#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_AssetsPreloaderData.generated.h"

class UObject;

UCLASS(BlueprintType)
class PAYBACK_API UIGS_AssetsPreloaderData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AssetsPreloaderData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<UObject>> AdditionalClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> AdditionalObjects;
    
};

