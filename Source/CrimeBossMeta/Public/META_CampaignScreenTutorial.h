#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "META_CampaignScreenTutorial.generated.h"

USTRUCT(BlueprintType)
struct FMETA_CampaignScreenTutorial : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag screenTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TutorialID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowEvenFinished;

    CRIMEBOSSMETA_API FMETA_CampaignScreenTutorial();
};
