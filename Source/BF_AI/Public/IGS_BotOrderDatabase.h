#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_BotOrderDatabaseUIData.h"
#include "IGS_BotOrderDatabase.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UIGS_BotOrderDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_BotOrderDatabase();

    UFUNCTION(BlueprintPure)
    FIGS_BotOrderDatabaseUIData GetUIData(EIGS_BotCommandDefinition inType) const;
    
};

