#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_ScreenWithSubscreens.generated.h"

class UCommonActivatableWidgetSwitcher;
class UIGS_ScreenWithSubscreens;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_ScreenWithSubscreens : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCommonActivatableWidgetSwitcher* WidgetSwitcher;
    
protected:
    UPROPERTY(Instanced)
    TArray<UIGS_Screen*> m_ScreensInSwitcher;
    
    UPROPERTY(Instanced)
    UIGS_ScreenWithSubscreens* m_ActiveScreenWithSubscreens;
    
public:
    UIGS_ScreenWithSubscreens();

    UFUNCTION(BlueprintImplementableEvent)
    void RequestSubscreenChange(FGameplayTag inTag);
    
};

