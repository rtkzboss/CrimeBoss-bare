#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea_Null.h"
#include "HumanBlockingNavArea.generated.h"

UCLASS(Config=Inherit)
class BF_NAVIGATION_API UHumanBlockingNavArea : public UNavArea_Null {
    GENERATED_BODY()
public:
    UHumanBlockingNavArea();

};

