#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_WorldSpaceUserWidget.generated.h"

class UIGS_WorldSpaceWidgetBase;

UCLASS(EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_WorldSpaceUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bTickDormant;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_WorldWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WorldSpaceWidgetBase* OwnerComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bOnScreen;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bTargeted;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CenterToEdgeLerpAlpha;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bForceHidden;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bHideWhenOccluded;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bOccluded;
    
    UIGS_WorldSpaceUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetTargeted(bool inTargeted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOccluded(bool inOccluded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProxyTickLastBeforeDormant(float InDeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProxyTick(float InDeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetTypeChanged(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetedChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOnScreenChanged(bool inOnScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFullyFaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFadeDistanceEnd();
    
};

