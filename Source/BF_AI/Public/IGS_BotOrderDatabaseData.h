#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "EIGS_BotOrderActionSource.h"
#include "IGS_BotOrderDatabaseData.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_BotOrderDatabaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxBotCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PathMustExist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Stacks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CancelOnObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<EIGS_BotCommandDefinition> CannotBeInterruptedBy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<EIGS_BotOrderActionSource> AllowedSources;
    
    FIGS_BotOrderDatabaseData();
};

