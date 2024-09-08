#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavAreaBreachPoints.generated.h"

UCLASS(Config=Inherit)
class BF_NAVIGATION_API UNavAreaBreachPoints : public UNavArea {
    GENERATED_BODY()
public:
    UNavAreaBreachPoints();

};

