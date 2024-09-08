#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialTableRow.h"
#include "IGS_TutorialsDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_TutorialsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_TutorialsDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_TutorialTableRow GetTutorialData(UObject* inWCO, const FGameplayTag inTutorialID, bool& outSucceeded);
    
};

