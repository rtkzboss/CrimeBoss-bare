#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetStatBar.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class BF_GUI_API UIGS_WidgetStatBar : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* StatNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* StatValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UProgressBar* StatProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ProgressBarBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ProgressBarForeground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StatMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StatMaxValue;
    
public:
    UIGS_WidgetStatBar();

};

