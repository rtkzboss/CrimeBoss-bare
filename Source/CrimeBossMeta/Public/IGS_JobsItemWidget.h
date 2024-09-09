#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "GameplayTagContainer.h"
#include "EJobUITileType.h"
#include "IGS_JobCategoryItemUIData.h"
#include "IGS_JobItemSelectedDelegate.h"
#include "IGS_JobsItemWidget.generated.h"

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsItemWidget : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UIGS_JobsItemWidget();

    UFUNCTION()
    void SetUIData(const FIGS_JobCategoryItemUIData& inUIData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIsOwnedChanged(bool inIsOwned);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeUIData(const FIGS_JobCategoryItemUIData& inUIData);
    
    UFUNCTION(BlueprintCallable)
    EJobUITileType GetDisplayType();
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag JobIDTag;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsOwned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_JobItemSelected OnJobItemSelected;
    
};

