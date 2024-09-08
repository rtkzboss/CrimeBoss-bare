#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderDatabaseUIData.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_BotOrderDatabaseUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ActionName;
    
    FIGS_BotOrderDatabaseUIData();
};

