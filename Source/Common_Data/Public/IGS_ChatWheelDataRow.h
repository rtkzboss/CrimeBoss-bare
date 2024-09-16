#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_ChatWheelDataRow.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChatWheelDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText FPSChatText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText IconChar;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StealthVOID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CombatVOID;

    FIGS_ChatWheelDataRow();
};
