#pragma once
#include "CoreMinimal.h"
#include "IGS_SpawnerNavFiltersHolder.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct FIGS_SpawnerNavFiltersHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UNavigationQueryFilter> DefaultNavFilter;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UNavigationQueryFilter> NoDangerNavFilter;
    
    BF_FRAMEWORKGAME_API FIGS_SpawnerNavFiltersHolder();
};

