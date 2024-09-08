#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SpawnDefHolder.generated.h"

class AIGS_AIEnemyGroupSpawner;

USTRUCT()
struct FIGS_SpawnDefHolder {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<AIGS_AIEnemyGroupSpawner>> SpawnGroups;
    
    UPROPERTY()
    FGameplayTagContainer DefendTags;
    
    BF_FRAMEWORKGAME_API FIGS_SpawnDefHolder();
};

