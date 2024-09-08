#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PoolKey.generated.h"

USTRUCT(BlueprintType)
struct BF_POOL_API FIGS_PoolKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* PoolObjectClass;
    
    UPROPERTY()
    FGameplayTagContainer PoolTagContainer;
    
    FIGS_PoolKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_PoolKey) { return 0; }

