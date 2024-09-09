#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "META_TutorialWidgetBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TutorialWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UMETA_TutorialWidgetBase();

    UFUNCTION(BlueprintNativeEvent)
    void UpdateVisibility();
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ScreenID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MetaMenuTags;
    
};

