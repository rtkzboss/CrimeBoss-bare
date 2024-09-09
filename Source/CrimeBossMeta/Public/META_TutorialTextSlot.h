#pragma once
#include "CoreMinimal.h"
#include "EMETA_TutorialBubbleDirection.h"
#include "META_TutorialWidgetBase.h"
#include "META_TutorialTextSlot.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TutorialTextSlot : public UMETA_TutorialWidgetBase {
    GENERATED_BODY()
public:
    UMETA_TutorialTextSlot();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TutorialBubbleDirection Direction;
    
};

