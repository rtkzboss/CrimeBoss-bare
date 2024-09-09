#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetItemStat.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class BF_GUI_API UIGS_WidgetItemStat : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetItemStat();

    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* StatNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* StatValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatValue;
    
};

