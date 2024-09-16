#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainContractID.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "IGS_RichPresenceChainNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RichPresenceChainNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UIGS_ChainContractID> ID;

    UPROPERTY(EditAnywhere)
    FText Name;

    BF_FRAMEWORKGAME_API FIGS_RichPresenceChainNameTableRow();
};
