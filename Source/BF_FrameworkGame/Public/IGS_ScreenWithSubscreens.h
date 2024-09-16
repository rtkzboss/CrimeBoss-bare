#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_ScreenWithSubscreens.generated.h"

class UCommonActivatableWidgetSwitcher;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_ScreenWithSubscreens : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_ScreenWithSubscreens();

    UFUNCTION(BlueprintImplementableEvent)
    void RequestSubscreenChange(FGameplayTag inTag);

    UPROPERTY(BlueprintReadOnly, Instanced, meta=(BindWidget))
    UCommonActivatableWidgetSwitcher* WidgetSwitcher;

protected:
    UPROPERTY(Instanced)
    TArray<UIGS_Screen*> m_ScreensInSwitcher;

    UPROPERTY(Instanced)
    UIGS_ScreenWithSubscreens* m_ActiveScreenWithSubscreens;

};
