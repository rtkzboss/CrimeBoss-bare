#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "StashLootDefinitionRow.h"
#include "META_StashLootDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_StashLootDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_StashLootDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FStashLootDefinitionRow GetLootData(UObject* inWCO, const FGameplayTag inLoot, bool& outSucceeded);

};
