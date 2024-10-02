#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_EventDate.h"
#include "IGS_EventTableRow.generated.h"

class UIGS_EventBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_EventTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TypeTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UIGS_EventBase> EventClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_EventDate VisibleFromDate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_EventDate ActiveFromDate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_EventDate EndsAtDate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowPopup;

    FIGS_EventTableRow();
};
