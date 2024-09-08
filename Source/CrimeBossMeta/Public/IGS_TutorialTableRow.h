#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialPage.h"
#include "IGS_TutorialTableRow.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_TutorialTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SlowDownGame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_TutorialPage> Pages;
    
    FIGS_TutorialTableRow();
};

