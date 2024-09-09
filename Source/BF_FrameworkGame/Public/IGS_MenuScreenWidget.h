#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputThumbstickType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "IGS_MenuScreenWidget.generated.h"

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_MenuScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_MenuScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestSubscreenChange(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshFocus();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSwitchedTo();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSwitchedFrom();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuInput(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMainScreenSwitch(FGameplayTag inEntireScreenTag);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalogInput(EIGS_InputThumbstickType Type, FVector2D Value);
    
    UFUNCTION(BlueprintNativeEvent)
    bool GoBackInternal();
    
    UFUNCTION(BlueprintNativeEvent)
    bool GoBack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ConfirmInternal();
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag screenTag;
    
};

