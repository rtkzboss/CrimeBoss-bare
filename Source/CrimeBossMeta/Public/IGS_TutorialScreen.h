#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_TutorialPage.h"
#include "IGS_TutorialScreen.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_TutorialScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_TutorialScreen();

    UFUNCTION(BlueprintImplementableEvent)
    void SetVideoTutorialData(const FIGS_TutorialPage& videoPageData, bool inSlowDownGame);

    UFUNCTION(BlueprintImplementableEvent)
    void SetTutorialData(const TArray<FIGS_TutorialPage>& Pages, bool inSlowDownGame);

    UPROPERTY(BlueprintReadOnly)
    FGameplayTag TutorialTag;

};
