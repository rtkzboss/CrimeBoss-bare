#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EIGS_ProgressGadgetSubtype.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_HeisterNumberChangedDelegate.h"
#include "IGS_ProgressWidgetTypeChangedEventDelegate.h"
#include "IGS_StatusProgressChangedEventDelegate.h"
#include "IGS_WorldSpaceWidgetBase.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WorldSpaceWidgetBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bForceHidden;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAutoActivateWidget;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_HeisterNumberChanged OnHeisterNumberChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_StatusProgressChangedEvent OnStatusProgressChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ProgressWidgetTypeChangedEvent OnWidgetSubtypeChangedEvent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* WorldWidgetOwner;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_WidgetType)
    EIGS_WorldWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_HeisterNumber)
    uint8 HeisterNumber;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Progress;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_ProgressGadgetSubtype ProgressWidgetSubtype;
    
public:
    UIGS_WorldSpaceWidgetBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void SetWorldSpaceWidgetVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetType(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressWidgetSubtype(EIGS_ProgressGadgetSubtype inType);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerForBinding(AActor* inOwner);
    
    UFUNCTION()
    void SetHeisterNumber(int32 inNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHidden(bool inHidden);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetTypeChanged();
    
protected:
    UFUNCTION()
    void OnRep_WidgetType(const EIGS_WorldWidgetType inOldType);
    
    UFUNCTION()
    void OnRep_HeisterNumber();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnProgressChanged();
    
    UFUNCTION()
    bool GetIsWidgetGroupVisible();
    
};

