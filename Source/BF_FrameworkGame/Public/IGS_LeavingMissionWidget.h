#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_LeavingMissionWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_LeavingMissionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_LeavingMissionWidget();

    UFUNCTION(BlueprintCallable)
    void SetText(FText Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultText();
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UTextBlock* Title;
    
};

