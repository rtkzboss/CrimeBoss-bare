#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetWithInput.h"
#include "EIGS_HUDVisibilityMode.h"
#include "IGS_HUDSubwidgetBase.generated.h"

class AIGS_PlayerCharacter;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_HUDSubwidgetBase : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UIGS_HUDSubwidgetBase();

    UFUNCTION(BlueprintImplementableEvent)
    void UnbindPawnEvent(AIGS_PlayerCharacter* inCharacter);

    UFUNCTION(BlueprintCallable)
    void SetWidgetRelevancy(bool inEnabled);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityMode(EIGS_HUDVisibilityMode inVisibilityMode);

    UFUNCTION(BlueprintCallable)
    void SetShowWidget(bool inEnabled);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFocus();

    UFUNCTION(BlueprintCallable)
    void RefreshShowWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void PlayWidgetAnimation(bool InVisibility);

    UFUNCTION(BlueprintImplementableEvent)
    void OnNewPawnEvent(AIGS_PlayerCharacter* inCharacter);

    UFUNCTION(BlueprintCallable)
    bool IsRelevant();

    UFUNCTION(BlueprintImplementableEvent)
    void HideAndDestroy();

    UFUNCTION(BlueprintCallable)
    void ForceShowWidget(bool inShow);

    UFUNCTION(BlueprintCallable)
    void ForceHideWidget(bool inHide);

    UPROPERTY(BlueprintReadWrite)
    int32 bShowWidget;

    UPROPERTY(BlueprintReadWrite)
    int32 bCurrentlyRelevant;

    UPROPERTY(EditAnywhere)
    EIGS_HUDVisibilityMode VisibilityMode;

    UPROPERTY(EditAnywhere)
    bool bHiddenOnStartup;

};
