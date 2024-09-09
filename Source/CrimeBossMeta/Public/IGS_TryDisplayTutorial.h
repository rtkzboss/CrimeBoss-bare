#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialResponseDelegate.h"
#include "IGS_TryDisplayTutorial.generated.h"

class UIGS_TryDisplayTutorial;
class UIGS_TutorialScreen;
class UObject;

UCLASS()
class CRIMEBOSSMETA_API UIGS_TryDisplayTutorial : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_TryDisplayTutorial();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_TryDisplayTutorial* TryDisplayTutorial(UObject* inWCO, FGameplayTag inTutorialTag, bool& outTutorialAlreadyFinished, bool ShowEvenFinished, bool DEBUG_SaveTutorialCompleted);
    
private:
    UFUNCTION()
    void OnTutorialScreenClosed(const FGameplayTag& inTag);
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_TutorialResponse OnCompleted;
    
private:
    UPROPERTY(Instanced)
    UIGS_TutorialScreen* m_TutorialScreen;
    
};

