#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavAreaRoomBase.generated.h"

UCLASS(Config=Inherit)
class BF_NAVIGATION_API UNavAreaRoomBase : public UNavArea {
    GENERATED_BODY()
public:
    UNavAreaRoomBase();

};

