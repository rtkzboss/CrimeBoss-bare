#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "IGS_PoolID.generated.h"

UCLASS(BlueprintType)
class BF_POOL_API UIGS_PoolID : public UObject {
    GENERATED_BODY()
public:
    UIGS_PoolID();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* PoolObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PoolTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PoolName;
    
};

