#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "EndGameCutscenesDefinitionRow.generated.h"

class UBinkMediaPlayer;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FEndGameCutscenesDefinitionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CutsceneID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* Movie;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EMETA_CareerCompletionReason> EndReason;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag AssetTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_Gang Gang;
    
    FEndGameCutscenesDefinitionRow();
};

