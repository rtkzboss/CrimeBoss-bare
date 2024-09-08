#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_RichPresenceTableRow.generated.h"

USTRUCT()
struct FIGS_RichPresenceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    FText Source;
    
    UPROPERTY(EditAnywhere)
    FString StrEpic;
    
    UPROPERTY(EditAnywhere)
    FString StrSteam;
    
    UPROPERTY(EditAnywhere)
    FString StrXbox;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> Params;
    
    BF_FRAMEWORKGAME_API FIGS_RichPresenceTableRow();
};

